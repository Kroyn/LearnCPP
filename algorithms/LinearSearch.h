#pragma once
#include <vector>

namespace ALG
{
    template <typename T>
    bool linearSearch(const std::vector<T>& vec, const T key)
    {
        for (size_t i = 0; i < std::size(vec); ++i)
        {
            if (key == vec[i])
            {
                return true;
            }
        }
        
        return false;
    }
}