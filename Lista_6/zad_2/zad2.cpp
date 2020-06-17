#include <iostream>
#include "stos.h"

int main()
{
    Stos stos;
    for (int i = 0; i <= 6;i++)
        stos.push(i);
    std::cout << stos.top()<<"\n";  //element na szczucie sztosu
    stos.pop(); //usuniecie elementu ze szczytu 
    std::cout << stos.top()<<"\n";  //element na szczycie po usunieciu
    Stos stos_copy(stos);   
    std::cout << stos_copy.top()<<"\n"; //element na szczycie skopiowanego stosu
    stos_copy.pop(); //usuniecie elementu ze szczytu 
    std::cout << stos_copy.top()<<"\n";
    Stos stos3 = stos_copy; //tworzenie nowego stosu poprzez przypisanie  
    stos3.push(10); //dodanie elementu na stos
    std::cout << stos3.top();   //element na szczycie przypisanego stosu
}