#pragma once

#include <algorithm>
#include <functional>
#include <iostream>
#include <vector>

template <typename T>
class Matrix
{
public:
    using MatrixDataType = std::vector<std::vector<T>>;

    Matrix() = delete;
    Matrix(const std::size_t rows, const std::size_t cols);
    Matrix(const std::size_t rows, const std::size_t cols, const T value);
    ~Matrix() noexcept = default;

    Matrix(const Matrix &other) = default;
    Matrix &operator=(const Matrix &other) = default;
    Matrix(Matrix &&other) noexcept = default;
    Matrix &operator=(Matrix &&other) noexcept = default;

    Matrix operator+(const Matrix &rhs) const;
    Matrix &operator+=(const Matrix &rhs);
    Matrix operator-(const Matrix &rhs) const;
    Matrix &operator-=(const Matrix &rhs);

    Matrix operator*(const T &scalar) const;
    Matrix &operator*=(const T &scalar);
    Matrix operator/(const T &scalar) const;
    Matrix &operator/=(const T &scalar);

    Matrix operator*(const Matrix &rhs) const;
    Matrix &operator*=(const Matrix &rhs);

    void print_matrix() const;

    std::size_t num_rows() const;
    std::size_t num_cols() const;

    // Hilfsfunktion
    void fill();
    void show_lines();

private:
    std::size_t m_rows;
    std::size_t m_cols;
    MatrixDataType m_data;
};
//  Fill
template <typename T>
void Matrix<T>::fill()
{
    m_data[0][0] = 1;
    m_data[0][1] = 2;
    m_data[1][0] = 3;
    m_data[1][1] = 4;
    m_data[2][0] = 5;
    m_data[2][1] = 6;
}

template <typename T>
void Matrix<T>::show_lines()
{
    T temp = 0;
    for(std::size_t m=0; m < m_cols; m++)
    {
        temp = 0;
        for(std::size_t i=0; i < m_rows; i++)
        {
            temp += m_data[i][m];
        }
        std::cout << temp << '\n';
    }
}

//  Constructoren
template <typename T>
Matrix<T>::Matrix(const std::size_t rows, const std::size_t cols)
    : m_rows(rows), m_cols(cols), m_data(m_rows, std::vector<T>(m_cols, T{}))
{
}

template <typename T>
Matrix<T>::Matrix(const std::size_t rows, const std::size_t cols, const T value)
    : m_rows(rows), m_cols(cols), m_data(m_rows, std::vector<T>(m_cols, value))
{
}


// Teil 1 - Methods +-
template <typename T>
Matrix<T> Matrix<T>::operator+(const Matrix<T> &rhs) const
{
    auto result = Matrix(m_rows, m_cols);
    for(std::size_t i=0; i < m_rows; i++)
    {
        std::transform( m_data[i].begin(),
                        m_data[i].end(),
                        rhs.m_data[i].begin(),
                        result.m_data[i].begin(),
                        std::plus<T>());
    }
    return result;
}

template <typename T>
Matrix<T> &Matrix<T>::operator+=(const Matrix<T> &rhs)
{
    for(std::size_t i=0; i<m_cols; i++)
    {
        std::transform( m_data[i].begin(),
                        m_data[i].end(),
                        rhs.m_data[i].begin(),
                        m_data[i].begin(),
                        std::plus<T>());
    }
    return *this;
}

template <typename T>
Matrix<T> Matrix<T>::operator-(const Matrix<T> &rhs) const
{
    auto result = Matrix(m_rows, m_cols);
    for(std::size_t i=0; i < m_rows; i++)
    {
        std::transform( m_data[i].begin(),
                        m_data[i].end(),
                        rhs.m_data[i].begin(),
                        result.m_data[i].begin(),
                        std::minus<T>());
    }
    return result;
}

template <typename T>
Matrix<T> &Matrix<T>::operator-=(const Matrix<T> &rhs)
{
    for(std::size_t i=0; i < m_rows; i++)
    {
        std::transform( m_data[i].begin(),
                        m_data[i].end(),
                        rhs.m_data[i].begin(),
                        m_data[i].begin(),
                        std::minus<T>());
    }
    return *this;
}

// Teil 2 - Methods */ -> Scalar
template <typename T>
Matrix<T> Matrix<T>::operator*(const T &scalar) const
{
    auto result = Matrix(m_rows, m_cols);
    for(std::size_t i=0; i < m_rows; i++)
    {
        for(std::size_t j=0; j < m_cols; j++)
        {
          result.m_data[i][j] = m_data[i][j]* scalar;
        }
    }
    return result;
}

template <typename T>
Matrix<T> &Matrix<T>::operator*=(const T &scalar)
{
    for(std::size_t i=0; i < m_rows; i++)
    {
        for(std::size_t j=0; j < m_cols; j++)
        {
          m_data[i][j] *= scalar;
        }
    }
    return *this;
}

template <typename T>
Matrix<T> Matrix<T>::operator/(const T &scalar) const
{
    auto result = Matrix(m_rows, m_cols);
    for(std::size_t i=0; i < m_rows; i++)
    {
        for(std::size_t j=0; j < m_cols; j++)
        {
          result.m_data[i][j] = m_data[i][j]/ scalar;
        }
    }
    return result;
}

template <typename T>
Matrix<T> &Matrix<T>::operator/=(const T &scalar)
{
    for(std::size_t i=0; i < m_rows; i++)
    {
        for(std::size_t j=0; j < m_cols; j++)
        {
          m_data[i][j] /= scalar;
        }
    }
    return *this;
}

// Teil 3 -  Matrix Mutiplikation
template <typename T>
Matrix<T> Matrix<T>::operator*(const Matrix &rhs) const
{
    auto result = Matrix(m_rows, rhs.m_cols);

    if (m_cols == rhs.m_rows)
    {
        T temp;
        for(std::size_t n=0; n<m_rows; ++n)
        {
            for(std::size_t m=0; m<rhs.m_cols; ++m)
            {
                temp = 0;
                for(std::size_t i = 0; i<m_cols; ++i)
                {
                    temp += m_data[n][i] * rhs.m_data[i][m] ;
                }
                result.m_data[n][m]  = temp;
            }
        }
    }
    else
    {
        std::cout << "Error Matrix dimensions dont match \n";
    }
    return result;
}

template <typename T>
Matrix<T> &Matrix<T>::operator*=(const Matrix &rhs)
{
    auto result = Matrix(m_rows, rhs.m_cols);

    if (m_cols == rhs.m_rows)
    {
        T temp;
        for(std::size_t n=0; n<m_rows; ++n)
        {
            for(std::size_t m=0; m<rhs.m_cols; ++m)
            {
                temp = 0;
                for(std::size_t i = 0; i<m_cols; ++i)
                {
                    temp += m_data[n][i] * rhs.m_data[i][m] ;
                }
                result.m_data[n][m]  = temp;
            }
        }
    }
    else
    {
        std::cout << "Error Matrix dimensions dont match \n";
    }
    m_data = result.m_data;

    return *this;
}


//  print method
template <typename T>
void Matrix<T>::print_matrix() const
{
    for (const auto &row : m_data)
    {
        for (const auto val : row)
        {
            std::cout << val << ", ";
        }
        std::cout << '\n';
    }
    std::cout << '\n';
}

//  get num rows
template <typename T>
std::size_t Matrix<T>::num_rows() const
{
    return m_rows;
}

template <typename T>
std::size_t Matrix<T>::num_cols() const
{
    return m_cols;
}
