#include<iostream>
using namespace std;
class complex 
{
   int x;
   int y;
public:
    complex()
    {
        x=10;
        y=50;
    }
void show()
{
    cout<<"the real part"<<x<<endl;
    cout<<"the imaginary part"<<y<<endl;
}
};
int main()
{
  complex a, m;
  a.show();
  cout<<"second object:"<<endl;
  m.show();
}
