#include <iostream>
#include <vector>
#include "utils/Random.h"

void vectorIntilization(std::vector<int>& vec)
{
    for (size_t i = 0; i < std::size(vec); ++i)
    {
        vec[i] = Random::get(0, 99);
    }
}

void vectorShow(const std::vector<int>& vec)
{
    for (size_t i = 0; i < std::size(vec); i++)
    {
        std::cout << vec[i] << ' ';
    }
    std::cout << '\n';
}

int main()
{
    std::vector<int> vector1(10);

    vectorIntilization(vector1);
    vectorShow(vector1);

    return 0;
}