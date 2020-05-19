#include <iostream>
const int N = 40;
int silnia=1;
int main(){
    
for (int i =0; i<=N;i++)
    {
        if(i==0) std::cout<<"0!= 1"<<std::endl;
        else    silnia *= i; 
        std::cout<<i<<"!= " << silnia << std::endl;
    }
//błędy zaczynają sie po 12!, ponieważ typ int nie mieści więcej informacji o liczbie na swoich bitach
return 0 ;
}