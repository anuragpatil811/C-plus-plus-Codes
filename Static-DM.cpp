#include<iostream>
using namespace std;
class abc
{
    int x;
    static int a;
    public:
    void getx(int s)
    {
        x=s;

        //cout<<"Enter the value of x:"<<endl;
        //cin>>x;
       a++;
    }
    void putx()
    {
        cout<<"the value of x is:"<<x<<endl;
        //cout<<"the value of static variable a is:"<<a<<endl;
    }
    static void puta()
    {
        //cout<<x;
        cout<<"the value of a is:"<<a;
    }
};
int abc :: a=101;
int main()
{
    abc m, n, p;
    m.getx(10);
    m.putx();
    abc :: puta();
    n.getx(20);
    n.putx();
    abc :: puta();
    p.getx(30);
    p.putx();
    abc :: puta();
    return 0;
}