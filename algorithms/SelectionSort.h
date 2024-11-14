#pragma once
#include <vector>
// #include <algorithm>

namespace ALG
{
    template <typename T>
    void SelectionSort(std::vector<T>& vec)
    {
        for (size_t i = 0; i < std::size(vec); ++i)
        {
            for (size_t j = 0; j < std::size(vec); ++j)
            {
                if (vec[j] < vec[i])
                {
                    // std::swap(vec[j], vec[i]);
                    std::swap(vec[j], vec[i]);
                }
            }
        }
    }

    template <typename T>
    void SelectionSortAlt(std::vector<T>& vec)
    {
        for (size_t i = 0; i < std::size(vec); ++i)
        {
            for (size_t j = 0; j < std::size(vec); ++j)
            {
                if (vec[j] < vec[i])
                {
                    // std::swap(vec[j], vec[i]);
                    std::swap(vec[j], vec[i]);
                }
            }
        }
    }
}