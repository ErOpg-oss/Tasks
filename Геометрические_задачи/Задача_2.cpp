#include <iostream>
#include <cmath>


double distance(double x1, double y1, double x2, double y2) {
    return sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
}
double perimetr(double dots[4][2]){
    double perimeter = 0.0;
    for (int i = 0; i < 4; ++i) {
        int j = (i + 1) % 4;
        perimeter += distance(dots[i][0], dots[i][1], dots[j][0], dots[j][1]);
    }    
    return perimeter;
    
}

int main() {
    double dots[4][2], perimeter = 0.0; 
    std::cout<<"Программа находит периметр четырехугольника по координатам точек.";

    std::cout << "Введите координаты 4 вершин x y" << std::endl;
    for (int i = 0; i < 4; ++i) {
        std::cout << "Вершина " << i + 1 << ": ";
        std::cin >> dots[i][0] >> dots[i][1];
    }

    std::cout << "Периметр четырёхугольника: " << perimetr(dots) << std::endl;
    return 0;
}

