#ifndef ARRAY_H_INCLUDED
#define ARRAY_H_INCLUDED
#include <iostream>
#include <iomanip>
using namespace std;

template< typename T >
class Array
{
    friend istream &operator>>( istream &input, Array &a)
    {
    for( size_t i = 0; i< a.size; ++i)
        input >> a.ptr[ i ];

    return input;
    }

    friend ostream &operator<<( ostream &output,const Array &a)
    {
        for( size_t i = 0; i< a.size; ++i)
            {
        output << setw(12) << a.ptr[ i ];

        if( (i + 1) % 4 == 0 )
            output << endl;
            }

    if( a.size %4 != 0)
        output << endl;

    return output;
    }

public:
    Array( int s )
    :size(s > 0 ? s : throw invalid_argument("Array size must be greater than 0")),
    ptr(new T[size])
    {
        for( size_t i = 0; i< size; ++i)
            ptr[ i ] = 0;
    }

    ~Array()
    {
        delete [] ptr;
    }

    size_t getSize() const
    {
        return size;
    }

    const Array &operator=( const Array &right)
    {
        if( &right != this)
        {
            if( size != right.size)
            {
                delete [] ptr;
                size = right.size;
                ptr = new T[ size ];
            }

            for( size_t i = 0;i< size; ++i )
                ptr[ i ] = right.ptr[ i ];
        }
        return *this;
    }

    bool operator==( const Array &right ) const
    {
    if( size != right.size )
        return false;
    for( size_t i = 0; i < size; ++i )
        if( ptr[i] != right.ptr[i])
        return false;

    return true;
    }

    bool operator!=( const Array &right ) const
    {
    return !( *this == right );
    }

    T operator[]( T subscript ) const
    {
    if( subscript <0 || subscript >= size)
        throw out_of_range("Subscript out of range");

    return ptr[ subscript ];
    }

    T &operator[](int subscript)
    {
    if( subscript <0 || subscript >= size)
        throw out_of_range("Subscript out of range");

    return ptr[ subscript ];
    }

private:
    size_t size;
    T *ptr;//with T type
};

#endif // ARRAY_H_INCLUDED
