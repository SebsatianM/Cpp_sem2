#include<iostream>
#include<cmath>

int nwd(int x, int y)
{
	if (x == 0 || y == 0)
		return -1;
	x = abs(x);
	y = abs(y);
	while (x != y)
	{
		if (x > y)
			x -= y;
		else
			y -= x;
	}
	return x;
}
int main()
{
	std::cout<< nwd(143, 26);
}