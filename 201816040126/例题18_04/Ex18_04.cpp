#include <iostream>
#include <stdexcept>
#include "Array.h"

using namespace std;

int main()
{
    Array<int> a1(7);//with int type
    Array<int> a2(10);

    cout << "Size of Array a1 is "
    << a1.getSize()
    << "\n Array after initialization:\n" << a1;

    cout << "Size of Array a2 is "
    << a2.getSize()
    << "\n Array after initialization:\n" << a2;

    cout << "\nEnter 17 integers:" << endl;
    cin >> a1 >> a2;

    cout << "\nAfter input, the Arrays contain:\n"
    << "a1:\n" << a1
    << "a2:\n" << a2;

    cout << "\nEvaluation: a1 != a2" << endl;

    if( a1 != a2)
        cout << "a1 and a2 are not equal" << endl;

    Array<int> a3( a1 );

    cout << "Size of Array a3 is "
    << a3.getSize()
    << "\n Array after initialization:\n" << a3;

    cout << "\nAssigning a2 to a1:" << endl;
    a1 = a2;

    cout << "a1:\n" << a1
    << "a2:\n" << a2;

    cout << "Evaluating: a1 == a2" << endl;

    if( a1 == a2)
        cout << "a1 and a2 are equal" << endl;

    cout << "\na1[5] is " << a1[5];

    cout << "\n\nAssigning 1000 to a1[5]" << endl;
    a1[5] = 1000;
    cout << "a1:\n" << a1;

    try
    {
        cout << "\nAttempt to assign 1000 to a1[15]" << endl;
        a1[15] = 1000;
    }
    catch( out_of_range &ex )
    {
        cout << "An exception occurred: " << ex.what() << endl;
    }


//with int type
    Array<double> b1(7);
    Array<double> b2(10);

    cout << "\n\nSize of Array b1 is "
    << b1.getSize()
    << "\n Array after initialization:\n" << a1;

    cout << "Size of Array b2 is "
    << b2.getSize()
    << "\n Array after initialization:\n" << a2;

    cout << "\nEnter 17 integers:" << endl;
    cin >> b1 >> b2;

    cout << "\nAfter input, the Arrays contain:\n"
    << "b1:\n" << b1
    << "b2:\n" << b2;

    cout << "\nEvaluation: b1 != b2" << endl;

    if( b1 != b2)
        cout << "a1 and a2 are not equal" << endl;

    Array<double> b3( b1 );

    cout << "Size of Array b3 is "
    << b3.getSize()
    << "\n Array after initialization:\n" << b3;

    cout << "\nAssigning b2 to b1:" << endl;
    b1 = b2;

    cout << "b1:\n" << b1
    << "b2:\n" << b2;

    cout << "Evaluating: b1 == b2" << endl;

    if( b1 == b2)
        cout << "b1 and b2 are equal" << endl;

    cout << "\nb1[5] is " << b1[5];

    cout << "\n\nAssigning 1000.1 to b1[5]" << endl;
    b1[5] = 1000.1;
    cout << "b1:\n" << b1;

    try
    {
        cout << "\nAttempt to assign 1000.1 to b1[15]" << endl;
        b1[15] = 1000;
    }
    catch( out_of_range &ex )
    {
        cout << "An exception occurred: " << ex.what() << endl;
    }

}
//Almost codes come from the book.They are similar.
