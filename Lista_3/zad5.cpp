#include <iostream>
#include <cmath>
#include <vector>
#include <chrono>
int fibo_a(int n)
{
    if (n == 0)
        return 0;
    if (n == 1)
        return 1;
    return fibo_a(n - 2) + fibo_a(n - 1);
}

int fibo_b(int n)
{
    return round((1 / sqrt(5)) * (pow((2 / (sqrt(5) - 1)), n) - pow((-2 / (sqrt(5) + 1)), n))); //round() dodane ponieważ zwracało wynik o 1 mniejszy od rzeczywistej wartości;
}

int fibo_c(int n)
{
    const int size = 48;
    static bool first = true;
    static std::vector<int> fib3(size);
    if (first)
    {
        for (int i = 0; i < size;i++)
        {
            fib3[i]= round((1 / sqrt(5)) * (pow((2 / (sqrt(5) - 1)), i) - pow((-2 / (sqrt(5) + 1)),i)));
        }
    }
    return fib3[n];
}
int main()
{
    for (int i = 0; i < 48;i++)
    {
        if(fibo_a(i)==fibo_b(i)&&fibo_a(i)==fibo_c(i))
        {
            std::cout << "wartosci trzech funkcji od "<<i<< " sa rowne!\n";
        }else
        {
            std::cout << "wartosci funkcji nie są rowne dla argumentu: " << i<<"\n";
            std::cout << fibo_a(i) << "\t" << fibo_b(i) << "\t" << fibo_c(i) << "\t";
        }
    }
    auto t1_fib_a = std::chrono::high_resolution_clock::now();
    for (int i = 0; i < 4;i++)
    {
        fibo_a(i);
    }
    auto t2_fib_a = std::chrono::high_resolution_clock::now();


    auto t1_fib_b = std::chrono::high_resolution_clock::now();
    for (int i = 0; i < 48;i++)
    {
        fibo_b(i);
    }
    auto t2_fib_b = std::chrono::high_resolution_clock::now();

    

    auto t1_fib_c = std::chrono::high_resolution_clock::now();
    for (int i = 0; i < 48;i++)
    {
        fibo_c(i);
    }
    auto t2_fib_c = std::chrono::high_resolution_clock::now();


    auto duration_fibo_a = std::chrono::duration_cast<std::chrono::microseconds>( t2_fib_a - t1_fib_a ).count();
    auto duration_fibo_b = std::chrono::duration_cast<std::chrono::microseconds>( t2_fib_b - t1_fib_b ).count();
    auto duration_fibo_c = std::chrono::duration_cast<std::chrono::microseconds>( t2_fib_c - t1_fib_c ).count();

    std::cout <<"Czas wykonywania funkcji fibo_a "<< duration_fibo_a<<" microsekund\n";
    std::cout <<"Czas wykonywania funkcji fibo_b "<< duration_fibo_b<<" microsekund\n";
    std::cout <<"Czas wykonywania funkcji fibo_c "<< duration_fibo_c<<" microsekund\n";
}