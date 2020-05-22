#include <iostream>
#include <vector>
#include <climits>


int vector_min_val(const std::vector <int> &vec)
{
    if (vec.empty()) return INT_MIN;
    else
    {
        int min = vec[0];
        for (int i = 1; i < vec.size(); i++)
        {
         if (vec[i]<min) min = vec[i];
        }
        return min;
    }
}

int main()
{
    std::vector<int> vec = {11, 312, 3, 11, -2};
    std::vector<int> vec2 = {};
    std::cout << "minimalnaw wartosc normalnego wektora: " << vector_min_val(vec)<<"\n";
    std::cout << "minimalna warotsc pustego wektora: " << vector_min_val(vec2)<<"\n";
}
