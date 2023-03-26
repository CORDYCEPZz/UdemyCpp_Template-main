#pragma once

template <typename ValueType>
class Matrix
{
public:
    Matrix( const ValueType & m_A,
            const ValueType & m_B,
            const ValueType & m_C,
            const ValueType & m_D)
        :A(m_A), B(m_B), C(m_C), D(m_D){};
    ~Matrix() = default;

    void print_matrix() const;

    ValueType get_A() const;
    ValueType get_B() const;
    ValueType get_C() const;
    ValueType get_D() const;

    void set_A(const ValueType new_A);
    void set_B(const ValueType new_B);
    void set_C(const ValueType new_C);
    void set_D(const ValueType new_D);


private:
    ValueType A;
    ValueType B;
    ValueType C;
    ValueType D;
};

template <typename ValueType>
// print Matrix
void Matrix<ValueType>::print_matrix() const
{
    std::cout << A << " " << B << "\n";
    std::cout << C << " " << D << "\n";
}


// getter Funktionen
template <typename ValueType>
ValueType Matrix<ValueType>::get_A() const
{
    return A;
}

template <typename ValueType>
ValueType Matrix<ValueType>::get_B() const
{
    return B;
}

template <typename ValueType>
ValueType Matrix<ValueType>::get_C() const
{
    return C;
}

template <typename ValueType>
ValueType Matrix<ValueType>::get_D() const
{
    return D;
}

// setter Funktionen
template <typename ValueType>
void Matrix<ValueType>::set_A(ValueType input)
{
    A = input;
}

template <typename ValueType>
void Matrix<ValueType>::set_B(ValueType input)
{
    B = input;
}

template <typename ValueType>
void Matrix<ValueType>::set_C(ValueType input)
{
    C = input;
}

template <typename ValueType>
void Matrix<ValueType>::set_D(ValueType input)
{
    D = input;
}
