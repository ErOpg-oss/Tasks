#include <iostream>
#include <cctype>
#include <clocale>


int main() {
    setlocale(LC_ALL, "Russian");
    char c, temp;
    std::cin>>c;
    c = tolower(c);
    std::cout<<с<<std::endl;
    if (c == 'а' || c == 'е' || c == 'ё' || c == 'и' || c == 'о' || c == 'у' || c == 'ы' || c == 'э' || c == 'ю' || c == 'я') 
    {
            std::cout<<"Гласная"<<std::endl;
    }
    else
    {
        std::cout<<"Согласная";
    }
    return 0; 
}
