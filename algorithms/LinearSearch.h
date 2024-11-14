#pragma once
#include <vector>

namespace ALG
{
    template <typename T>
    bool linearSearch(const std::vector<T>& arr)
    {
        for (size_t i = 0; i < std::size(arr); ++i)
        {
            if (key == arr[i])
            {
                return true;
            }
        }
        
        return false;
    }
}