#include<iostream>
using namespace std;
int c = 40;
int main()
{
   int m = 120; 
    if(m > 100)
    {
        cout<<"Inside the conditional block"<<endl;
       cout<<"The value of m is"<<m<<endl;
       m = m + 20;
       cout<<"The value of m is"<<m<<endl;
    }
    else
    {
        cout<<"Inside the else part"<<endl;
        m = m-1;
        cout<<"The value of m is"<<m<<endl;
    }
    cout<<"Outside the conditional block";
    return 0;
}