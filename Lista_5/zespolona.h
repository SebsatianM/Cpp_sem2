class Zespolona
{        
    public:
        float rzecz;
        float zesp;

        Zespolona(float const &a_rzecz, float const &a_zesp) { rzecz = a_rzecz, zesp = a_zesp; }
        Zespolona() : rzecz(0), zesp(0) {} //konstruktor domyślny klasy

        Zespolona operator+(const Zespolona& pom){
            Zespolona wynik;
            wynik.rzecz = pom.rzecz + rzecz;
            wynik.zesp = pom.zesp + zesp;
            return wynik;
        }

        Zespolona operator-(const Zespolona& pom){
            Zespolona wynik;
            wynik.rzecz = rzecz - pom.rzecz ;
            wynik.zesp = zesp -pom.zesp;
            return wynik;
        }
    

        Zespolona operator*(const Zespolona& pom){
            Zespolona wynik;
            wynik.rzecz = rzecz*pom.rzecz -zesp*pom.zesp;
            wynik.zesp = pom.zesp * rzecz + pom.rzecz * zesp;
            return wynik;
        }

        Zespolona operator/(const Zespolona& pom){
            Zespolona wynik;
            wynik.rzecz = (rzecz * pom.rzecz + zesp * pom.zesp) / (pom.rzecz * pom.rzecz + pom.zesp * pom.zesp);
            wynik.zesp = (zesp*pom.rzecz - rzecz*pom.zesp)/ (pom.rzecz * pom.rzecz + pom.zesp * pom.zesp);
            return wynik;
        }
        
};

std::ostream& operator<<(std::ostream& out, Zespolona const &pom)
    {
        if (pom.zesp<0){ 
            out << "( " << pom.rzecz << " - " << abs(pom.zesp) << " i)\n";
        }else
        {
            out << "( " << pom.rzecz << " + " << pom.zesp << " i)\n";
        }
        
        return out;
    }
std::istream& operator >> (std::istream& in, Zespolona & pom)
    {
        std::cout << "Podaj część rzeczywistą: ";
        in >> pom.rzecz;
        std::cout << "Podaj część urojoną: ";
        in >> pom.zesp;
        return in;
    }
