#include<iostream>
using namespace std;
class employee
{
int id;
int age;
public: 
employee()
{
    id = 0;
    age = 21;
}
   employee(int a, int b)
   {
    id = a;
    age = b;
   }
   employee(employee &x)
   {
    id = x.id;
    age = x.age;
   }
   void display()
   {
    cout<<"the value of id is"<<id<<endl;
    cout<<"the value of age is"<<age<<endl;
   }
};
int main()
{
    employee a;
employee b(101, 25);
employee c(b);  //copy constructor call method 1
employee d = a; //copy constructor call method 2
  cout<<"display first object"<<endl;
  a.display();
  cout<<"display second object"<<endl;
  b.display();
  cout<<"display third object"<<endl;
  c.display();
  cout<<"display fourth object"<<endl;
  d.display();
  return 0;
}