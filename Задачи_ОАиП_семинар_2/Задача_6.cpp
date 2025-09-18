#include <iostream>

int main() {
    int age;
    char answer = 'y';
    std::cout << "Проверка возраста пользователя.\n";

    while (answer == 'y') {
        std::cout << "Введите ваш возраст: ";
        std::cin >> age;

        if (age < 18) {
            std::cout << "Вы слишком молоды\n";
        } else if (age <= 60) {
            std::cout << "Вы взрослый\n";
        } else {
            std::cout << "Вы в возрасте старше 60\n";
        }

        std::cout << "Хотите продолжить y: ";
        std::cin >> answer;
    }

    return 0;
}