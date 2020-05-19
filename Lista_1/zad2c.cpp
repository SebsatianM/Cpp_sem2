#include <iostream>
#include <cmath>
const int N = 1000000;
float suma = 0,pom;
int main(){
    
for (int i=1; i<=N;i++)
{
    pom = 1/(pow((2*i-1),2));
    suma += 8*pom;
}
std::cout<<sqrt(suma);
return 0 ;
}