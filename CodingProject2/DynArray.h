#pragma once

#include <cstdlib>

template <typename T>
class DynamicArray
{
public:
    DynamicArray();
    DynamicArray(const T &value, const std::size_t length);
    ~DynamicArray();

    void push_back(const T &value);
    void pop_back();

    T &operator[](const std::size_t index);
    const T &operator[](const std::size_t index) const;

    std::size_t get_length() const;

private:
    std::size_t m_length;
    std::size_t m_capacity;
    T *m_data;
};

//  Constructor and Deconstructor
template <typename T>
DynamicArray<T>::DynamicArray(): m_length(0), m_capacity(1), m_data( new T[m_capacity] ) {};

template <typename T>
DynamicArray<T>::DynamicArray(const T &value, const std::size_t length)
    : m_length(length), m_capacity( length > 0  ? length : 1 ), m_data( new T[m_capacity] )
    //  der ternary operator sagt das wenn wir eine lenge von 0 eingeben eine capacity von 1 haben wie auch oben
{
    for(std::size_t i = 0; i<length; i++)
    {
        m_data[i] = value;
    }
}

template <typename T>
DynamicArray<T>::~DynamicArray()
{
    if (m_data != nullptr) // man kan nur etwas frei geben wenn der speicher auch belegt ist
    {
        delete[] m_data;
        m_data = nullptr;
    }
}



// push_back and pop_back
template <typename T>
void DynamicArray<T>::push_back(const T &value)
{
    auto temp = new T[m_length + 1];
    for(std::size_t i=0; i<m_length; i++)
    {
        temp[i] = m_data[i];
    }
    temp[m_length] = value;

    delete[] m_data;
    m_data = temp;
    m_length += 1;
    m_capacity += 1 ; // das ist nur ein symbolischer wert nicht der tatsächliche speicher
}

template <typename T>
void DynamicArray<T>::pop_back()
{
    m_length -= 1;
    m_capacity -= 1;

    auto temp = new T[m_length];
    for(std::size_t i=0; i < m_length; i++)
    {
        temp[i] = m_data[i];
    }

    delete[] m_data;
    m_data = temp;
}

template <typename T>
T& DynamicArray<T>::operator[](const std::size_t index)
{
    return m_data[index];
}

template <typename T>
const T& DynamicArray<T>::operator[](const std::size_t index) const
{
    return m_data[index];
}

template <typename T>
std::size_t DynamicArray<T>::get_length() const
{
    return m_length;
}
