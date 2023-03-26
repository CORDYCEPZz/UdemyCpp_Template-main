#pragma once

class Matrix
{
public:
    Matrix( const double & m_A,
            const double & m_B,
            const double & m_C,
            const double & m_D)
        :A(m_A), B(m_B), C(m_C), D(m_D){};
    ~Matrix() = default;

    void print_matrix() const;

    double get_A() const;
    double get_B() const;
    double get_C() const;
    double get_D() const;

    void set_A(const double new_A);
    void set_B(const double new_B);
    void set_C(const double new_C);
    void set_D(const double new_D);


private:
    double A;
    double B;
    double C;
    double D;
};
