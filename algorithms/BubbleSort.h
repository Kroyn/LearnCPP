#pragma once
#include <vector>

namespace ALG
{
    template <typename T>
    void bubbleSort(std::vector<T>& arr) {
        for (int i = 0; i < std::size(arr) - 1; ++i)  
        {
            for (int j = 0; j < std::size(arr) - i - 1; ++j) {
                if (arr[j] > arr[j + 1]) {
                        std::swap(arr[j], arr[j + 1]);
                }
            }
        }
    }
}