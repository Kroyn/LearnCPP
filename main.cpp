#include <iostream>
#include "temp/cpp20.h"

int main()
{
    constexpr int num { 25 };

    std::cout << CPP20TEST::multiply(num) << '\n';

    return 0;
}