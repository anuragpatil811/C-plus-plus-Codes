#include<iostream>
using namespace std;
class sample
{
    int x;
    int y;
public:
   void getdata(int a, int b);
   void display();
   void operator -();
};
void sample::getdata(int a, int b)
{
    x = a;
    y = b;
}
void sample::display()
{
    cout<<x<<endl;
    cout<<y<<endl;
}
void sample::operator -()
{
 x = -x;
 y = -y;   
}
int main()
{
    sample s;
    s.getdata(4, -9);
    cout<<"before the operator function called:"<<endl;
    s.display();
    cout<<"after the operator function called:"<<endl;
    -s;   
    s.display();
    return 0;
}