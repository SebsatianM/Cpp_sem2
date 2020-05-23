#include <iostream>
#include <string.h>
int main()
{
    char haslo[8];
    strcpy(haslo, "Ta.jnE!");
    for ( ; ; )
    {
        
        std::cout << "Podaj haslo: ";
        char tmp[8];
        std::cin >> tmp;
        //std::cout << &haslo<<"\t"<<&tmp<<"\n";
        if (strcmp(tmp, haslo) == 0)
            break;
        std::cout << "Przykro mi haslo jest niepoprawne!\n";

    }
    std::cout << "witaj w systemie!";

    /*
    Poprawność działania tego programu zależy od kompilatora w moim przypadku program działa prawidło problem z książki może wynikać z tego, że kompilator
    który był użyty do stowrzenia programu w książce zarezerwował w pamięci napierw miejsce na zmienną tmp a po niej haslo i w przypadku gdy wpisywany do zmiennej 
    tmp był ciąg '12345671234567' koncówka '1234567' została zapisana pod kolejnym adresem pamięci gdyż w tej początkowej nie było już dla niej miejsca a kolejnym
    adresem pamięci który został nadpisany była zmienna 'haslo' w której przechowywana była zawartość hasła\
    */
}
