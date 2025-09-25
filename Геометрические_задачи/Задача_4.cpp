#include <iostream>
#include <cmath>

double distance(double x1, double y1, double x2, double y2) {
    return sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
}

double diagonal(double dots[4][2]) {
    return distance(dots[0][0], dots[0][1], dots[2][0], dots[2][1]);
}

int main() {
    double dots[4][2];

    std::cout << "Программа находит длину диагонали прямоугольника по координатам вершин.\n";
    std::cout << "Введите координаты 4 вершин x y:\n";

    for (int i = 0; i < 4; ++i) {
        std::cout << "Вершина " << i + 1 << ": ";
        std::cin >> dots[i][0] >> dots[i][1];
    }

    double diag = diagonal(dots);
    std::cout << "Длина диагонали прямоугольника: " << diag << std::endl;

    return 0;
}

