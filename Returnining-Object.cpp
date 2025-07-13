#include<iostream>
using namespace std;
class complex 
{
    float x;
    float y;
public:
      void input(float m, float n)
      {
        x=m;
        y=n;
      }
      void show()
      {
        cout<<"the real part is"<<x<<endl;
        cout<<"the imaginary part is"<<y<<endl;
      }
      friend complex sum(complex c1, complex c2);
};
complex sum(complex c1, complex c2)
{
    complex c3;
    c3.x = c1.x + c2.x;
    c3.y = c1.y + c2.y;
       return c3;
}
int main()
{
     complex a, b, c;
     a.input(20, 10.5);
     b.input(10, 5.1);
     cout<<"the first object is:"<<endl;
     a.show();
     cout<<"the second object is"<<endl;
     b.show();
     c = sum(a, b);
     cout<<"the addition of two complex numbers is:"<<endl;
     c.show();
}