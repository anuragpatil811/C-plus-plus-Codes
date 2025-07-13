#include<iostream>
using namespace std;
class b
{
  int a;
public:
   int b;
   void getab()
   {
    a = 5;
    b = 10;
   }
   int geta()
   {
   return a;
   }
    int getb()
   {
   return b;
   }
    void showab()
   {
    cout<<"a="<<a<<endl;
    cout<<"b="<<b<<endl;
   }
};
class d: public b //inherited in public mode
 {
  int c;
public:
void mul()
{
  getab();
   c = getb() * geta(); 
}
void display()
{
  showab();
  
   cout<<"the multiplication value"<<c;
}
};
int main()
{
  d d1;
  
 // d1.getab();
  d1.mul();
  d1.display();
  //d1.b = 7;
  d1.mul();
  d1.display();
    return 0;
}