#include <iostream>
#include <cctype>

bool check(char c) {
    switch (tolower(c)) {
        case 'a': case 'e': case 'i': case 'u': case 'o': case 'y':
            return true;
        default:
            return false;
    }
}

int main() {
    std::cout<<"Пользователь вводит строку (через цикл по символам). Программа подсчитывает количество гласных букв. Алфавит – латиница.";
    char input;
    std::cout << "Введите символ: ";
    std::cin >> input;

    if (check(input)) 
    {
        std::cout << "'" << input << "' — гласная буква." << std::endl;
    } 
    else
    {
        std::cout << "'" << input << "' — не гласная буква." << std::endl;
    }

    return 0;
}
