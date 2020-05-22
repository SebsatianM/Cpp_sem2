#include <iostream>
#include <vector>

double operator*(const std::vector<double>& vec1, const std::vector<double>& vec2)
{
    if (vec1.size() != vec2.size())
    {
        std::cout << "Wektory nie są jednakowej długości!" ;
        return 0;
    }
    else
    {
        double result = 0;
        for(int i = 0; i < vec1.size(); i++)
        {
            result += vec1[i] * vec2[i];
        }
        return result;
    }
}

int main()
{
    std::vector<double> vec1 = {11, 312};
    std::vector<double> vec2 = {11, 312};
    std::cout << "iloczyn skalarny dwoch wektorow: "<< vec1 * vec2 ;
    return 0;
}