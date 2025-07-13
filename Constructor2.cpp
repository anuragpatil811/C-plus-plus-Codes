//Parametrized Constructor
#include<iostream>
using namespace std;
class complex 
{
   int x;
   int y;
public:
    complex(int m, int n);   
void show()
{
    cout<<"the real part"<<x<<endl;
    cout<<"the imaginary part"<<y<<endl;
}
};
complex :: complex(int m, int n)
{
    x = m;
    y = n;
}
int main()
{
  complex a(12, 18);  //Method 1: Implicit call to the constructor
  complex b = complex(80, 100); //Method 2: Explicit call to the constructor    
  a.show();
  cout<<"second object:"<<endl;
  b.show();
}
