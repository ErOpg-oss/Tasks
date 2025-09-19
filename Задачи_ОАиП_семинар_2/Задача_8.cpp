#include <iostream>
#include <cctype>

bool isVowel(char c) {
    switch (tolower(c)) {
        case 'a': case 'e': case 'i': case 'u': case 'o': case 'y':
            return true;
        default:
            return false;
    }
}

int main() {
    char input;
    std::cout << "Введите символ: ";
    std::cin >> input;

    if (isVowel(input)) {
        std::cout << "'" << input << "' — гласная буква." << std::endl;
    } else {
        std::cout << "'" << input << "' — не гласная буква." << std::endl;
    }

    return 0;
}
