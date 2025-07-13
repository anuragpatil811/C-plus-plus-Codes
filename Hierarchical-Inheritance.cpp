#include<iostream>
using namespace std;
class A
{
public: 
    int x, y;
    void getdata()
    {
        cout<<"Enter the values of x and y"<<endl;
        cin>>x>>y;
    }
};
class B: public A
{
public: 
    void mul()
    {
        cout<<"multiplying the values="<<x*y<<endl;;
    }
};
class C: public A
{
public:
    void add()
    {
        cout<<"Adding the values="<<x+y<<endl;
    }
};
int main()
{
B b1;
C c1;
b1.getdata();
//b1.x = 7;
//b1.y = 10;
b1.mul();
c1.getdata();
c1.add();
return 0;
}