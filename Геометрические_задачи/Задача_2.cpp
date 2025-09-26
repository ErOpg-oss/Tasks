#include <iostream>
#include <cmath>


double distance(double x1, double y1, double x2, double y2) {
    return sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
}
double perimetr(double dots[4][2], int n){
    double perimeter = 0.0;
    for (int i = 0; i < n; ++i) {
        int j = (i + 1) % n;
        perimeter += distance(dots[i][0], dots[i][1], dots[j][0], dots[j][1]);
    }    
    return perimeter;
    
}

int main() {
    int n;
    std::cout<<"Программа находит периметр четырехугольника по координатам точек.";
    std::cout<<"Введите кол во вершин: ";
    std::cin>>n;
    double dots[n][2];

    std::cout << "Введите координаты вершин x y" << std::endl;
    for (int i = 0; i < n; ++i) {
        std::cin >> dots[i][0] >> dots[i][1];
    }

    std::cout << "Периметр четырёхугольника: " << perimetr(dots, n) << std::endl;
    return 0;
}

