#include<iostream>
using namespace std;
int c = 40;
int main()
{
   int a = 10; //Global Variable
   ++c;
    cout<<"The value of a is"<<a<<endl;
    cout<<"The value of c is"<<c<<endl;
    {
        int b = 9; //Local Variable
        cout<<"The value of b is"<<b;
        cout<<"The value of c is"<<c<<endl;
    }
    
    return 0;
}