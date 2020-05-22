#include <iostream>
#include <vector>

void zero_vector(std::vector <double> &vec)
{
    for (int i = 0; i < vec.size(); i++)
        {
        vec[i]=0;
        }
}

int main()
{
    std::vector <double> vec = {11, 312, 3, 11, -2};
    zero_vector(vec);
    for (int i = 0; i < vec.size(); i++)
        {
            std::cout << vec[i]<<"\n";
        }
}
