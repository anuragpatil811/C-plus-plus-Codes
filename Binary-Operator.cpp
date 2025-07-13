#include<iostream>
using namespace std;
class sample
{
   int x;
public:
   void get(int a)
   {
    x=a;
   }
  void put()
  {
    cout<<x;
  }
  friend sample operator *(sample, sample);
};
sample operator *(sample s1, sample s2)
{
    sample s3;
    s3.x = s1.x * s2.x;
    return s3;
}
int main()
{
    sample ob1, ob2, ob3;
    ob1.get(5);
    ob2.get(8);
    cout<<"the value after multiplication:"<<endl;
    ob3 = ob1*ob2;
    ob3.put();
    return 0;    
}