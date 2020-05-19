#include <iostream>
#include <math.h>
int a, b, c;
float delta, x1, x2;
int main()
{
    std::cout << "Podaj wartosci wspolczynnikow trojmianu kwadratowego ax^2+bx+c\nPodaj a: ";
    std::cin >> a;
    std::cout << "Podaj b: ";
    std::cin >> b;
    std::cout << "Podaj c: ";
    std::cin >> c;
    std::cout << "Postac trojmianu " << a << "x^2+" << b << "x+" << c << "\n";
    delta = pow(b, 2) - 4 * (a * c);
    if(delta>0){
        x1 = (-b + sqrt(delta)) / (2 * a);
        x2 = (-b - sqrt(delta)) / (2 * a);
        std::cout << "x1: " << x1 << "\nx2: " << x2;
    }else if (delta==0)
    {
         std::cout << "x0: " << -b  / (2 * a);
    }else
    {
        std::cout << "Brak miejsc zerowych";
    }

    return 0;
}