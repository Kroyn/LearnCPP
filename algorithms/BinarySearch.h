#pragma once
#include <vector>

namespace ALG
{
    template <typename T>
    int BinarySearch(const std::vector<T>& arr, T key)
    {
        int leftBound = 0, rightBound = std::size(arr) - 1;

        do
        {
            int middle = (leftBound + rightBound) / 2;

            if (key < arr[middle])
            {
                rightBound = middle - 1;
            }
            else if (key > arr[middle])
            {
                leftBound = middle + 1;
            }
            else
            {
                return middle + 1;
            }

        } while (leftBound <= rightBound);
        
        return -1;
    }
}