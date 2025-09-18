#include <iostream>

int main() {
    int number;
    char answer = 'y';
    std::cout << "Проверка делимости числа на 3 и 5.\n";

    while (answer == 'y') {
        std::cout << "Введите число: ";
        std::cin >> number;

        if (number % 3 == 0 && number % 5 == 0) {
            std::cout << "Число делится на 3 и на 5 одновременно\n";
        } else if (number % 3 == 0) {
            std::cout << "Число делится на 3\n";
        } else if (number % 5 == 0) {
            std::cout << "Число делится на 5\n";
        } else {
            std::cout << "Число не делится ни на 3, ни на 5\n";
        }

        std::cout << "Хотите продолжить y: ";
        std::cin >> answer;
    }

    return 0;
}