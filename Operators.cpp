#include<iostream>
using namespace std;
int main()
{
    int a, b;
    a = 10;
    b = 6;
    bool r;
    r=(a==b);
    //** Arithmetic Operators
    /*cout<<"a + b="<<a + b<<endl;//Addition
    cout<<"a - b="<<a - b<<endl;//Subtraction
    cout<<"a * b="<<a * b<<endl;//Multiplication
    cout<<"a / b="<<a / b<<endl;//Division
    cout<<"a % b="<<a % b<<endl;//Modulo */

    //** Relational Operators
    /*cout<<"a == b="<<r<<endl;
    r = (a!= b);
    cout<<"a != b="<<r<<endl;
    r = (a< b);
    cout<<"a < b="<<r<<endl;
    r = (a > b);
    cout<<"a > b="<<r<<endl;
    r = (a>= b);
    cout<<"a >= b="<<r<<endl;
    r = (a<= b);
     cout<<"a <= b="<<r<<endl; */

     //** Logical Operators
     cout<<"a && b="<<r<<endl;
    r = (a && b);
    cout<<"a || b="<<r<<endl;
    r = (a|| b);
    cout<<"a ! b="<<r<<endl;
    r = (a != b);
    return 0;
}