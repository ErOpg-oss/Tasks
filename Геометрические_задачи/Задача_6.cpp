#include <iostream>
#include <cmath>

double orientation(double x1, double y1, double x2, double y2, double x3, double y3) {
    return (x2 - x1) * (y3 - y1) - (y2 - y1) * (x3 - x1);
}

bool onSegment(double x1, double y1, double x2, double y2, double x3, double y3) {
    if (x3 <= std::max(x1, x2) && x3 >= std::min(x1, x2) &&
        y3 <= std::max(y1, y2) && y3 >= std::min(y1, y2)) {
        return true;
    }
    return false;
}

bool doIntersect(double x1, double y1, double x2, double y2,
                 double x3, double y3, double x4, double y4) {
    double o1 = orientation(x1, y1, x2, y2, x3, y3);
    double o2 = orientation(x1, y1, x2, y2, x4, y4);
    double o3 = orientation(x3, y3, x4, y4, x1, y1);
    double o4 = orientation(x3, y3, x4, y4, x2, y2);

    if (o1 * o2 < 0 && o3 * o4 < 0) {
        return true;
    }
    if (o1 == 0 && onSegment(x1, y1, x2, y2, x3, y3)) return true;
    if (o2 == 0 && onSegment(x1, y1, x2, y2, x4, y4)) return true;
    if (o3 == 0 && onSegment(x3, y3, x4, y4, x1, y1)) return true;
    if (o4 == 0 && onSegment(x3, y3, x4, y4, x2, y2)) return true;

    return false;
}

int main() {
    double x1, y1, x2, y2; // Первый отрезок (A-B)
    double x3, y3, x4, y4; // Второй отрезок (C-D)

    std::cout << "Программа проверяет пересечение двух отрезков на плоскости.\n"<<"Введите координаты двух точек x y";
    std::cout << "Отрезок АВ: ";
    std::cin >> x1 >> y1;
    std::cin >> x2 >> y2;

    std::cout << "Введите координаты второго отрезка (C и D):\n";
    std::cout << "Точка CD: ";
    std::cin >> x3 >> y3;
    std::cin >> x4 >> y4;

    if (doIntersect(x1, y1, x2, y2, x3, y3, x4, y4)) {
        std::cout << "Отрезки пересекаются.";
    } 
    else {
        std::cout << "Отрезки не пересекаются.";
    }

    return 0;
}