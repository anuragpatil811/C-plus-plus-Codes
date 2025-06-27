#include<iostream>
using namespace std;
class time
{
    int hours;
    int minutes;
public:
    time(int t)
    {
        hours = t/60;
        minutes = t%60;
    }
    int add()
    {
        cout<<"The time is:";
        cout<<hours<<"Hrs and"<<minutes<<"mnts";
        int m;
        m=minutes;
        return m;
    }
};
int main()
{
   int x=90;
    time t1(x);
    int j;
    j = t1.add();
    cout<<"the value of j is:"<<j;
    return 0;
}