#pragma once
#include <vector>

namespace ALG
{
    template <typename T>
    void SelectionSort(std::vector<T>& arr)
    {
        for (size_t i = 0; i < std::size(arr); ++i)
        {
            for (size_t j = 0; j < std::size(arr); ++j)
            {
                if (arr[j] < arr[i])
                {
                    std::swap(arr[j], arr[i]);
                }
            }
        }
    }

    template <typename T>
    void SelectionSortAlt(std::vector<T>& arr) {
        for (size_t i = 0; i < std::size(arr) - 1; ++i) {
            size_t min_index = i;
            for (size_t j = i + 1; j < std::size(arr); ++j) {
                if (arr[j] < arr[min_index]) {
                    min_index = j;
                }
            }
            if (min_index != i) {
                std::swap(arr[i], arr[min_index]);
            }
        }
    }
}