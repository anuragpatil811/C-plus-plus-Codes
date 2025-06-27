#include<iostream>
using namespace std;
class M
{
   protected:
      int m;
   public:
void getm(int v)
{
   m = v;
}
};
class N
{
    protected:
    int n;
    public:
    void getn(int j)
    {
        n = j;
    }
};
class P: public M, public N
{
public:
    void display()
    {
        cout<<"m="<<m<<endl;
        cout<<"n="<<n<<endl;
        cout<<"m*n="<<m*n<<endl;
       
    }
};
int main()
{
   P p1;
   p1.getm(10);
   p1.getn(2);
   p1.display();
   return 0;
}