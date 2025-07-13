#include<iostream>
using namespace std;
class invent2;
class invent1
{
    int code;
    int item;
    float price;
public:
      invent1(int a, int b, float c)
      {
        code = a;
        item = b;
        price = c;
      }
      void putdata()
      {
        cout<<"Code:"<<code<<"\n"<<"item:"<<"\n"<<"price:"<<price<<"\n";
      }
      int getcode()
      {
        return code;
      }
      float getprice()
      {
        return price;
      }
      int getitem()
      {
        return item;
      }
      operator float(){return (item * price);}
};
class invent2
{
    int code;
    float value;
public:
      invent2()
      {
        code=0;
        value=0;
      }
      invent2(int x, float y)
      {
        code = x;
        value = y;
      }
      void putdata()
      {
         cout<<"Code:"<<code<<"Value:"<<value<<"\n";
      }
      invent2(invent1 p)
      {
        code = p.getcode();
        value = p.getitem()*p.getprice();
      }
};
int main()
{
  invent1 s1(100, 5, 140.0);
  invent2 d1;
  float tv;
  tv = s1;
  cout<<"the value of tv is:"<<tv;
  d1 = s1;
  cout<<"Product Details-invent1 type"<<"\n";
  s1.putdata();
  cout<<"\n stock value"<<"\n";
  cout<<"value"<<tv<<"\n";
  cout<<"Product details- invent2 type"<<"\n";
  d1.putdata();
  return 0;
}
