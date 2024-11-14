#include <iostream>
#include "utils/Random.h"
#include "algorithms/SelectionSort.h"

void initilizationVector(std::vector<int>& vec)
{
    for (size_t i = 0; i < std::size(vec); ++i)
    {
        vec[i] = Random::get(0, 99);
    }
    
}

// Show vector
template <typename T>
void showVector(const std::vector<T> vec)
{
    for (size_t i = 0; i < std::size(vec); ++i)
    {
        std::cout << vec[i] << ' ';
    }
    std::cout << '\n';
}

int main()
{
    std::vector<int> vector1(10);
    initilizationVector(vector1);
    showVector(vector1);
    
    ALG::SelectionSort(vector1);

    showVector(vector1);

    return 0; 
}