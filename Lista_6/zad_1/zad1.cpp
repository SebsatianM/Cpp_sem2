#include <iostream>
#include "stos.h"

int main()
{
    Stos stos;
    for (int i = 0; i <= 50;i++)
        stos.push(i);   

    while(!stos.empty())
    {
        std::cout << stos.top() << "\trozmiar: " ;
        stos.pop();
        Stos *ptr = &stos;
        std::cout<<ptr->size()<<"\tpojemnosc: ";
        std::cout<<ptr->capacity()<<"\n";
    }
}