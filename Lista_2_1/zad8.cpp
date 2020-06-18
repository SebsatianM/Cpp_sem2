#include <iostream>
#include <cmath>
int main()
{
    const int n = 1000000;
    double suma = 0.0;
    
    for (int k = 1; k <= n; ++k)
    {
        suma += 1.0/pow(k,2); // zmiana 1 na 1.0 oraz wykorzystanie funkcji potęgowania zamiast k*k
    }  
    
    std::cout << suma;
        return 0;
}