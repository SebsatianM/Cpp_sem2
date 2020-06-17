#include "stos.h"
#include <iostream>


int main()
{
	Stos stos;
	stos.push(1);
	stos.push(2);
	stos.push(3);
	std::cout << stos<<"\n";
	stos.reverse();
	std::cout << stos;
}