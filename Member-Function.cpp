#include<iostream>
using namespace std;
class abc
{
    int a, b;
    void large()
    {
        getab();
        cout<<"the largest value is:"<<endl;
        if(a>b)
        {
            cout<<a;
        }
        else
        {
            cout<<b;
        }
    }
    public:
        void getab();
        void putab()
        {
            large();
            cout<<"the valus of a and b are:"<<endl;
            cout<<a<<endl<<b<<endl;
            //cout<<"the largest of a and b is"<<endl;
            //large();
        }
};
void abc :: getab()
{
    cout<<"Enter the values of a and b:"<<endl;
    cin>>a>>b;
}
int main()
{
    abc s;
    //s.getab();
    s.putab();
    return 0;
}