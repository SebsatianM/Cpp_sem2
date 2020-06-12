#include <iostream>

class Samochod  //pierwotna wersja
{
     
    public:
        Samochod (int n): _kola(n), _sruby(4*_kola)
        {
            std::cout << "Samochod z "<<_kola<<" kolami i "<<_sruby <<" srubami \n";
        }
    private:
        int _sruby;
        int _kola;
};

class Samochod2 //sposób I 
{
     
    public:
        
        Samochod2 (int n): _kola(n), _sruby(4*n)    //Zmiana 
        {
            std::cout << "Samochod z "<<_kola<<" kolami i "<<_sruby <<" srubami \n";
        }
    private:
        int _sruby;
        int _kola;
};

class Samochod3 //sposób II 
{
     
    public:
       
        Samochod3 (int const &n)   
        {
            _kola= n;
            _sruby = 4*_kola;
            std::cout << "Samochod z " << _kola << " kolami i " << _sruby << " srubami \n";
        }
   
    private:
        int _sruby;
        int _kola;
        
};
int main()
{
    Samochod s(4);
    Samochod2 s2(4);
    Samochod3 s3(4);
   
    return 0;
}