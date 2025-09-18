#include <iostream>

int main()
{
    int lang, wight;
    char answer = 'y';

    while (answer == 'y'){
        std::cout<<"Пользователь вводит длину и ширину прямоугольника. Программа вычисляет и выводит площадь."<<std::endl;
        std::cin>>lang;
        std::cin>>wight;
        std::cout<<"Площадь равна: "<<lang*wight<<std::endl;
        

        std::cout<<"Хотите продолжить y: ";
        std::cin>>answer;
            
    }

    return 0;
}