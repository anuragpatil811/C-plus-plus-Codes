#include<iostream>
using namespace std;
class abc
{
int x;
public:
   void getx()
   {
    cout<<"Enter the value of x:";
    cin>>x;
   }
   void putx()
   {
    cout<<"the value of x is:"<<endl;
    cout<<x<<endl;
   }
   void add(abc z)
   {
    int a;
    a = x + z.x;
    cout<<"the addition is"<<a<<endl;

   }
};
int main()
{
    abc s, u;
    s.getx();
    cout<<"the value of x for first object is:"<<endl;
    s.putx();
    u.getx();
    cout<<"the value of x for second object is:"<<endl;
    u.putx();
    s.add(u);
    return 0;
}