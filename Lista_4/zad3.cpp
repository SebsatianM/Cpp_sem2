#include <iostream>
#include <chrono>

int main()
{

int N = 8565555;
auto t1_new_delete = std::chrono::high_resolution_clock::now();
    for (unsigned n = 1; n <= N; ++n)
    {
        int *p = new int[n];
        delete[] p;
    }
auto t2_new_delete = std::chrono::high_resolution_clock::now();
int var = 0;
auto t1_dodawania = std::chrono::high_resolution_clock::now();
for (unsigned n = 1; n <= N; ++n)
{
    var += 10;
}
auto t2_dodawania = std::chrono::high_resolution_clock::now();

auto czas_new_delete = std::chrono::duration_cast<std::chrono::microseconds>( t2_new_delete - t1_new_delete ).count();
auto czas_dodawania = std::chrono::duration_cast<std::chrono::microseconds>( t2_dodawania - t1_dodawania ).count();

std::cout <<"Czas wykonywania funkcji new/delete  "<< czas_new_delete <<" microsekund\n";
std::cout <<"Czas wykonywania dodawania  "<< czas_dodawania <<" microsekund\n";
std::cout <<"Czas wykonywania dodawania jest "<< czas_new_delete/czas_dodawania <<" razy szybszy\n";

}