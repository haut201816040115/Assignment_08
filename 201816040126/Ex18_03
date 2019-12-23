#include <iostream>

using namespace std;

template < typename T >
bool isEqualTo( T a, T b )
{
    if( a = b)
        return true;
    else
        return false;
}

template < typename T >
bool operator==( T &t, T &number )
{
    if( number != t )
        return false;
    else
        return true;
}

int main()
{
    int x1 = 2,y1 = 2;
    cout << "Two numbers of int type:" << endl;
    if( isEqualTo( x1 , y1 ) )
        cout << "x1��y1���!( function about isEqualTo)" << endl;

    if( x1 == y1 )
        cout << "x1��y1���!( function about operator== )" << endl;

    double x2 = 2.2,y2 = 2.2;
    cout << "\n\nTwo numbers of double type:" << endl;
    if( isEqualTo( x2 , y2 ) )
        cout << "x1��y1���!( function about isEqualTo )" << endl;

    if( x2 == y2 )
        cout << "x2��y2���!( function about operator== )" << endl;

    return 0;
}
