#include <iostream>

int main()
{
    int c, temp;
    char answer = 'y';

    while (answer == 'y'){
        std::cout<<"Пользователь вводит температуру в градусах Цельсия. Программа переводит её в градусы"<<std::endl;
        std::cin>>c;
        temp = (c * 1.8) + 32;
        std::cout<<"Температура в градусах: "<<temp<<std::endl;

        std::cout<<"Хотите продолжить y: ";
        std::cin>>answer;
            
    }

    return 0;
}