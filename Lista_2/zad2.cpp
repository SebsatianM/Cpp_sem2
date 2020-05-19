#include <iostream>
float liczba;
int main()
{
    std::cout << "podaj swoja liczbe: ";
    std::cin >> liczba;
    if(liczba!=0)
    {
        std::cout << "odwrotnosc liczby "<<liczba<<" to: " << 1 / liczba << "\n";
    }else
    {
        std::cout << "nie ma odwrotnosci 0!";
    }

    return 0;
}