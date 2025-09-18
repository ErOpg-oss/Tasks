#include <iostream>

int main() {
    int n;
    char answer = 'y';
    std::cout << "Вывод таблицы квадратов чисел.\n";

    while (answer == 'y') {
        std::cout << "Введите число n: ";
        std::cin >> n;

        int i = 1;
        while (i <= n) {
            std::cout << i << "^2 = " << i*i << std::endl;
            i++;
        }

        std::cout << "Хотите продолжить y: ";
        std::cin >> answer;
    }

    return 0;
}