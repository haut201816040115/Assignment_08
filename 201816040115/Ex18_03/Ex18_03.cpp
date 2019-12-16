
#include <iostream>

using namespace std;

template<typename T>
bool isEqualTo(T x, T y)
{
    if(x == y)
        return true;
    else
        return false;
}

class Complex
{
public:
    Complex(double x, double y)
        :real(x),imaginary(y)
{

}
    ~Complex() { }
    double getReal() const
    {
        return real;
    }
    double getImaginary() const
    {
        return imaginary;
    }

private:
    double imaginary;
    double real;
};

bool operator==(Complex &x, Complex &y)
{
    if((x.getReal() == y.getReal() )&&(x.getImaginary() == y.getImaginary()))
        return true;
    else
        return false;
}

int main()
{
    int x1, y1 ;
    x1 = y1= 6;
    double x2, y2;
    x2 =6.6;
    y2 = 7.7;
    char x3, y3;
    x3 = y3 = 'A';
    cout << " input : x1 = y1 = 6" << endl;
    if(isEqualTo(x1,y1))
        cout << "It's equal" << endl;
    else
        cout << "It's not equal" << endl;
    cout << " input : x2  = 6.6, y2 = 7.7" << endl;
    if(isEqualTo(x2,y2))
        cout << "It's equal" << endl;
    else
        cout << "It's not equal" << endl;
    cout << " input : x3 = y3 = A" << endl;
    if(isEqualTo(x3,y3))
        cout << "It's equal" << endl;
    else
        cout << "It's not equal" << endl;
        //***********************************************
    Complex complex1(1.0,2.0);
    Complex complex2(1.0,2.0);
    Complex complex3(2.0,1.0);
    cout << "input: complex1:    1+2i" << endl;
    cout << "input: complex2:    1+2i" << endl;

    if(isEqualTo(complex1,complex2))
        cout << "It's equal" << endl;
    else
        cout << "It's not equal" << endl;

    cout << "input: complex1:    1+2i" << endl;
    cout << "input: complex3:    2+i" << endl;
    if(isEqualTo(complex1,complex3))
        cout << "It's equal" << endl;
    else
        cout << "It's not equal" << endl;



    return 0;
}
