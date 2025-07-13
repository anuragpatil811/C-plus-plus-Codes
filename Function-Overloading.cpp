#include<iostream>
using namespace std;
float add(int a, float b)
{
    return (a + b);
}
int add(int a, int b, int c)
{
    return (a + b + c);
}
int main()
{
cout<<"Calling function with three parameters"<<endl;
cout<<add(2, 6, 4)<<endl;
cout<<"Calling the function with three parameters"<<endl;
cout<<add(2, 3.1);
 return 0;
}