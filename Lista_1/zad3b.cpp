#include <iostream>
#include <cmath>
float sum,t0,pi,t;
int main(){
t0 = 1/sqrt(3);

for(int i = 0; i<=30;i++)
{
pi = 6*pow(2,i)*t0;
std::cout<<"pi("<<i<<")= "<<pi<<std::endl;
t = t0/(sqrt(pow(t0,2)+1)+1);
t0=t;

}

return 0 ;
}