#include <iostream>
#include <cmath>
const int N = 1000000;
float suma = 0,pom;
int main(){
    
for (int i=1; i<=N;i++)
{
    pom = (pow((-1),(i+1)))/(2*i-1);
    suma += 4*pom;
}
std::cout<<suma;
return 0 ;
}