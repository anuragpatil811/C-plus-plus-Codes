#include<iostream>
using namespace std;
int main()
{
 int a;
 cout<<"Enter the value of a:";
 cin>>a;
 if(a > 100)
 {
    if(a >= 150)
    {
        cout<<"The value of a is greater than 150";
    }
    else
    {
        cout<<"The value is more than 100 but less than 150";
    }
 }
 else
 {
    cout<<"the value is less than 100";
 }
 return 0;   
}