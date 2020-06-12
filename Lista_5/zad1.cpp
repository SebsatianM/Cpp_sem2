#include <iostream>
#include "wektor.h"

int main()
{
    Wektor w(5);
    for (int i = 0; i < w.size();i++)
    {
        std::cout << w[i] << "\n";
    }
}