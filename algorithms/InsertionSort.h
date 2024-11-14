#pragma once
#include <vector>

namespace ALG
{
    template <typename T>
    void insertionSort(std::vector<T>& arr)
    {
        for (size_t i = 1; i < std::size(arr); ++i)
        {
            int key = arr[i];

            int j{};
            for (j = i - 1; j >= 0 && arr[j] > key; --j)
            {
                arr[j + 1] = arr[j];
            }
            arr[j + 1] = key;
        }
    }
}