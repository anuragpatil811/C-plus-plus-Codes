#include<iostream>
using namespace std;
int main()
{
   int r, i, j;
   cout<<"Enter the total number of rows:";
   cin>>r;
    for(i=0; i<r; i++)
    {
        for(j=1; j<=i; j++)
        {
            cout<<"*";
        }
        cout<<"\n";
    }
   
  return 0;
}