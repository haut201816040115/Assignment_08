//Ex18_04.cpp

#include<iostream>
#include<stdexcept>
#include "Array.h"

int main()
{
    Array<int> integers1(7);    //seven-element int Array
    Array<int> integers2(10);    //ten-element int Array
    Array<double> decimal1(7);  //seven-element double Array
    Array<double> decimal2(10);  //ten-element double Array

    cout << "Size of Array integers1 is "
        << integers1.getSize()
        << "\nArray after initialization:\n" << integers1;
    cout << "Size of Array integers2 is "
        << integers2.getSize()
        << "\nArray after initialization:\n" << integers2;
        //input and print integersInt1 and integersInt2
        cout << "\nEnter 17 integers: " << endl;
        cin >> integers1 >> integers2;
        cout << "\nAfter input, the Arrays contain:\n"
            << "integer1:\n" << integers1
            << "integer2:\n" << integers2;
        //use overloaded inequality (!=) operator
        cout << "\nEvaluating: integer1 != integer2" << endl;
        if(integers1 != integers2)
            cout << "integer1 and integer2 are not equal" << endl;

        //create Array integers3 using integer1 as an
        //initializer; print size and contents
        Array<int> integers3(integers1);    //invokes copy constructor

        cout << "\nSize of Array integer3 is: "
            << integers3.getSize()
            << "\nArray after initialization:\n" << integers3;

        //use overloaded assignment (=) operator
        cout << "\nAssigning integer2 to integer1: " << endl;
        integers1 = integers2;  //note target Array is smaller

        cout << "integer1:\n" << integers1
            << "integer2:\n" << integers2;

        //use overloaded assignment (==) operator
        cout << "\nEvaluating: integer1 == integer2" << endl;

        if(integers1 == integers2)
            cout << "integers1 and integer2 are equal" << endl;

        //use overloaded subscript operator to create rvalue
        cout << "integers1[5] is " << integers1[5];

        //use overloaded subscript operator to create lvalue
        cout << "\n\nAssigning 1000 to integers1[5] " << endl;
        integers1[5] = 1000;
        cout << "integers1: \n" << integers1;

        //attempt to use out-of-range subscript
        try
        {
            cout << "\nAttempt to assign 1000 to integers1[15]" << endl;
            integers1[15] = 1000;   //ERROR: subscript out of range
        }
        catch(out_of_range &ex)
        {
            cout << "An exception occurred: " << ex.what() << endl;
        }
        cout <<"\n\n";

    /*cout << "Size of Array decimal1 is "
        << decimal1.getSize()
        << "\nArray after initialization:\n" << decimal1;*/
            cout << "Size of Array decimal1 is "
        << decimal1.getSize()
        << "\nArray after initialization:\n" << decimal1;
    cout << "Size of Array decimal2 is "
        << decimal2.getSize()
        << "\nArray after initialization:\n" << decimal2;
        //input and print integersInt1 and integersInt2
        cout << "\nEnter 17 decimals: " << endl;
        cin >> decimal1 >> decimal2;
        cout << "\nAfter input, the Arrays contain:\n"
            << "decimal1:\n" << decimal1
            << "decimal2:\n" << decimal2;
        //use overloaded inequality (!=) operator
        cout << "\nEvaluating: decimal1 != decimal2" << endl;
        if(decimal1 != decimal2)
            cout << "decimal1 and decimal2 are not equal" << endl;

        //create Array decimal3 using decimal1 as an
        //initializer; print size and contents
        Array<double> decimal3(decimal1);    //invokes copy constructor

        cout << "\nSize of Array decimal3 is: "
            << decimal3.getSize()
            << "\nArray after initialization:\n" << decimal3;

        //use overloaded assignment (=) operator
        cout << "\nAssigning decimal2 to decimal1: " << endl;
        decimal1 = decimal2;  //note target Array is smaller

        cout << "decimal1:\n" << decimal1
            << "decimal2:\n" << decimal2;

        //use overloaded assignment (==) operator
        cout << "\nEvaluating: decimal1 == decimal2" << endl;

        if(decimal1 == decimal2)
            cout << "decimal1 and decimal2 are equal" << endl;

        //use overloaded subscript operator to create rvalue
        cout << "decimal1[5] is " << decimal1[5];

        //use overloaded subscript operator to create lvalue
        cout << "\n\nAssigning 1000.10 to decimal1[5] " << endl;
        decimal1[5] = 1000.10;
        cout << "decimal1: \n" << decimal1;

        //attempt to use out-of-range subscript
        try
        {
            cout << "\nAttempt to assign 1000.10 to decimal1[15]" << endl;
            decimal1[15] = 1000.10;   //ERROR: subscript out of range
        }
        catch(out_of_range &ex)
        {
            cout << "An exception occurred: " << ex.what() << endl;
        }

}   //end main

