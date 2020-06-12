#include <iostream>
#include "zespolona.h"

int main()
{
    Zespolona z1(5.0,2.0);
    Zespolona z2(3.0, -7);
    Zespolona z3 = z1 + z2;
    Zespolona z4 = z1 - z2;
    Zespolona z5 = z1 * z2;
    Zespolona z6 = z1 / z2;
    std::cout << "Pierwsza liczba zespolona:"<<z1;
    std::cout << "Druga liczba zespolona:" <<z2;
    std::cout << "Dodawanie liczb zespolonych:"<< z3;
    std::cout << "Odjemowanie liczb zespolonych:" << z4;
    std::cout << "Mnożenie liczb zespolonych:" << z5;
    std::cout << "Dzielenie liczb zespolonych:"<< z6;
}


    