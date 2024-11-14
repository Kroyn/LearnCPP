#include <iostream>
#include "utils/Random.h"
#include "algorithms/BinarySearch.h"

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
    
    std::cout << "Enter a key: ";
    int key{};
    std::cin >> key;

    std::cout << "Index found: << " << ALG::BinarySearch(vector1, key) << '\n';

    return 0; 
}