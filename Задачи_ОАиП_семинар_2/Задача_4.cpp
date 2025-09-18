#include <iostream>

int main()
{
    int number;
    char answer = 'y';
    std::cout<<"Пользователь вводит целое число. Программа сообщает, является ли число четным или нечетным.";


    while (answer == 'y'){
        std::cout<<"Введите число: ";
        std::cin>>number;
        if (number%2 == 0)
        {
            std::cout<<"Ваше число четное"<<std::endl;
        }
        else
        {
            std::cout<<"Ваше число нечетное"<<std::endl;
        }
        
        std::cout<<"Хотите продолжить y: ";
        std::cin>>answer;
        }
    return 0;
}