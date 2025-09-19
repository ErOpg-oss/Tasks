#include <iostream>

int main() {
    for (int code = 31; code <= 126; ++code) {
        std::cout << code << " - " << char(code) << std::endl;
    }
    return 0;
}