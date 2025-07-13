//Pointers to memebers
#include<iostream>
using namespace std;
class X
{
  public:
      int a;
      void f(int b)
      {
        cout<<"The value passed is:"<<b<<endl;
      }
};
int main()
{
   int X :: *ptiptr = &X::a;
   void (X::* ptfptr)(int)=&X::f;
   X xobj;
   xobj.*ptiptr = 10;
   cout<<"the value of a is:"<<xobj.*ptiptr<<endl;
   (xobj.*ptfptr)(20);
   
   return 0; 
}