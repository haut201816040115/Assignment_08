//Array.h

#ifndef ARRAY_H
#define ARRAY_H

#include<iostream>
#include<iomanip>
using namespace std;

template< typename T>
class Array
{
    friend ostream &operator<<(ostream &output, const Array &a)
    {
    //output private ptr-based array
    for(size_t i = 0; i < a.size; ++i)
        {
        output << setw(12) << a.ptr[i];

        if((i+1)%4 == 0)    // 4 numbers per row of out
            output << endl;
        }   //end for

    if(a.size%4 != 0)   //end last line of output
        output << endl;

    return output;  //enables cout << x << y;

    }   //end function operator<<


    friend istream &operator>>(istream &input, Array &a)
    {
    for(size_t i = 0; i < a.size; ++i)
        input >> a.ptr[i];

        return input;   //enable cin >> x >> y;
    }   //end function


public:
    //default constructor for class Array (default size 10)
    //explicit Array(int = 10) ;//default constructor
Array(int arraySize)
        :size(arraySize > 0 ? arraySize : throw invalid_argument("Array size must be greater than 0")),
        ptr(new T[size])
{
    for(size_t i = 0; i< size ;++i)
        ptr[i] = 0 ;    //set pointer-based array element
}   //end Array default constructor

//destructor for class Array
~Array()
{
    delete [] ptr;  //release pointer-based array space
}   //end destructor

//copy constructor for class Array;
//must receive a reference to an Array
Array(const Array &arrayToCopy)
    :size(arrayToCopy.size),
    ptr(new T[size])
{
    for(size_t i = 0; i < size; ++i )
        ptr[i] = arrayToCopy.ptr[i];    //copy into object
}   //end Array copy constructor

//return number of elements of Array
size_t getSize() const
{
    return size;    //number of elements in Array
}   //end function getSize

//overloaded assignment operator ;
//const return avoids: (a1 =a2) = a3
const Array &operator=(const Array &right)
{
    if(&right!= this)   //avoid self-assignment
    {
        // for Arrays of different sizes, deallocate original
        //left-side Array, then allocate new left-side Array
        if(size != right.size)
        {
            delete [] ptr;  //release space
            size = right.size;  //resize this object
            ptr = new T[size];  //create space for Array copy
        }

        for(size_t i = 0; i < size; ++i)
            ptr[i] = right.ptr[i];  //copy array into object
    }
    return *this;   //enable x = y = z, for example
}

//determine if two Arrays are equal and
//return true, otherwise return false
bool operator==(const Array &right) const
{
    if(size != right.size )
        return false;

    for(size_t i = 0; i < size; ++i)
        if(ptr[i]!=right.ptr[i])
            return false;
    return true;
}   //end function operator==

    //inequality operator; returns opposite of == operator
    bool operator!=(const Array &right) const
    {
        return !(*this == right);   //invokes Array::operator==
    }   //end function operator!=

//overloaded subscript operator for non-const Arrays;
//reference return creates a modifiable lvalue
T &operator[](int subscript)
{
    //check for subscript out-of-range error
    if(subscript < 0 ||subscript >= size)
        throw out_of_range("Subscript out of range");

    return ptr[subscript];
}   //end function operator[]

//overloaded subscript operator for const Arrays
//const reference return creates an rvalue
T operator[](int subscript) const
{
    //check for subscript out-of-range error
    if(subscript < 0 ||subscript >= size)
        throw out_of_range("Subscript out of range");

    return ptr[subscript];  //returns copy of this element
}   //end function operator[]

private:
    size_t size;    //pointer-based array size
    T *ptr; //pointer to first element of pointer-based array
};  // end class Array
#endif // ARRAY_H
