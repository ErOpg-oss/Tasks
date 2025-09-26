#include <iostream>
#include <cmath>

int rotate(int x1, int y1, int x2, int y2, int mx, int my) {
    int opr = (x2 - x1) * (my - y1) - (y2 - y1) * (mx - x1);
    if (opr > 0) return 1;
    if (opr < 0) return -1;
    return 0; 
}

bool Inside(double dots[][2], int n, double mx, double my) {
    int sign = 0;
    bool onEdge = false;

    for (int i = 0; i < n; ++i) {
        int r = rotate(dots[i][0], dots[i][1], dots[(i+1)%n][0], dots[(i+1)%n][1], mx, my);
        if (r == 0) onEdge = true; 
        else if (sign == 0) sign = r; 
        else if (r != 0 && r != sign) return false; 
    }

    return true; 
}

int main() {
    int n;
    double mx, my;

    std::cout << "Введите количество вершин: ";
    std::cin >> n;

    std::cout << "Введите координаты точки (x y): ";
    std::cin >> mx >> my;

    double dots[n][2];
    std::cout << "Введите координаты вершин x y:\n";
    for (int i = 0; i < n; ++i)
        std::cin >> dots[i][0] >> dots[i][1];

    if (Inside(dots, n, mx, my))
        std::cout << "YES (точка внутри или на границе)\n";
    else
        std::cout << "NO (точка снаружи)\n";

    return 0;
}