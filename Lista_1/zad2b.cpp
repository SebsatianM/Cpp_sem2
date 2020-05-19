#include <iostream>
#include <cmath>
const int N = 1000000;
float suma = 1,pom;
int main(){
    
for (int i=1; i<=N;i++)
{
    pom = (4*(pow(i,2)))/((4*(pow(i,2)))-1);
    suma *= pom;
}
std::cout<<2*suma;
return 0 ;
}