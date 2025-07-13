//Copy Constructor
#include<iostream>
using namespace std;
class code
{
int id;
int age;
public: 
   code(int a, int b)
   {
    id = a;
    age = b;
   }
   code(code &x)
   {
    id = x.id;
    age = x.age;
   }
   void display()
   {
    cout<<"the value of x is"<<id<<endl;
   }
};
int main()
{
  code a(100, 20);
  code b(a);  //copy constructor call method 1
  code c = a; //copy constructor call method 2
  cout<<"display first object"<<endl;
  a.display();
  cout<<"display second object"<<endl;
  b.display();
  cout<<"display third object"<<endl;
  c.display();
  return 0;
}