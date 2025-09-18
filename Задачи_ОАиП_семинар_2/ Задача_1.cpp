#include <iostream>

int main()
{
    int lang, change;
    char answer = 'y';

    while (answer == 'y'){
        std::cout<<"Введите кол-во сантиметров: ";
        std::cin>>lang;
        change =lang%100;
        std::cout<<"Кол-во метров: "<<lang/100<<std::endl;
        std::cout<<"Кол-во оставшихся сантиметров: "<<change<<std::endl;

        std::cout<<"Хотите продолжить y/n: ";
        std::cin>>answer;
            
    }

    return 0;
}
