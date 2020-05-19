#include <iostream>
#include <math.h>
int posX, PosY;
float odleglosc;
int main()
{
    std::cout << "Podaj wspolrzedna X punktu: ";
    std::cin >> posX;
    std::cout << "Podaj wspolrzedna Y punktu: ";
    std::cin >> PosY;
    odleglosc = sqrt(pow(posX, 2) + pow(PosY, 2));
    std::cout << "Odleglosc punktu (" << posX << "," << PosY << ") od poczatku ukladu wsporzednych wynosi: " << odleglosc << "\n";
    std::cout << "kat między punktem (" << posX << "," << PosY << ") a osia OX: " << (asin(PosY / odleglosc)*180)/M_PI;
    
    return 0;
}