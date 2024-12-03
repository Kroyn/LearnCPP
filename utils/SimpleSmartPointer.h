#pragma once

template <typename T>
class SimpleSmartPointer
{
private:
    T* m_object;
public:
    SimpleSmartPointer(T* object) : m_object(object)
    {
        std::cout << "Created smart pointer\n";
    }

    ~SimpleSmartPointer()
    {
        std::cout << "Deleted smart pointer\n";
        delete m_object;
    }

    T* operator->() { return m_object; }
};