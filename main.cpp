#include <iostream>
#include "utils/SimpleSmartPointer.h"

class Simple
{
private:
    int m_variable{};

public:
    Simple() = default;

    Simple(int var) : m_variable{ var }
    {
        std::cout << "Constuction::Simple\n";
    }
    ~Simple()
    {
        std::cout << "Destructor::Simple\n";
    }
    int Get() const { return m_variable; }
};

int main()
{
    SimpleSmartPointer smart{ new Simple{ 10 } };

    std::cout << "Simple = " << smart->Get() << '\n';
}