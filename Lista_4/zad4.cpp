#include <iostream>

int main()
{
    double tab[10];
    double x;
    std::cout << &x << "\t" << &tab[-1] << "\n";

//w obu przypadkach dostajemy taki sam adres komórki w pamięci który w rzeczywistości jest adresem zmiennej x dzieję się dlatego, że zmienne w pamięci ram umieszczane są 
//jedana za drugą a podczas odwoływania się do pamięci poprzez indeksownaie tablicy informujemy kompilator o ile rozmiarów typu zmiennej (w typ przypadku o -1 rozmiar typu double)
//ma się przesunąć w pamięci i odczytać jej adres dlatego odczytaliśmy adres zmiennej która nie jest w tablicy co może spowodować poważne konsekwencje gdyż nie operujemy na obszarze pamięci o który nam chodziło i możemy nadpisywać dane


}