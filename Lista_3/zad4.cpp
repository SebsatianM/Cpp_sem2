#include <iostream>

unsigned  silnia(unsigned n) 
{                           
    if (n == 0)
        return 1;
    return n * silnia(n - 1);
}

int main()
{

    silnia(-1);
//Tresc bledu jaki otrzymalismy to 'Naruszenie ochrony pamięci (zrzut pamięci)' oznacza to, że probowalismy się dostac do fragmentu pamieci do ktorego nie mamy praw a jest to spowodowane tym, ze argumenty ktore przyjmuje funkcja sa typu unsigned co oznacza, ze nie dopusza on liczby ujemnej
    
}