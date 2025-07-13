#include<iostream>
using namespace std;
int main()
{
    int a[2][2], b[2][2];
     int i, j;
     cout<<"Enter the array elements:";
     for(i=0; i<2; i++)
     {
        for(j=0; j<2; j++)
        {
            cin>>a[i][j];
        }
     }
     for(i=0; i<2; i++)
     {
        for(j=0; j<2; j++)
        {
            cin>>b[i][j];
        }
     }
     cout<<"Addition of two array is:";
      for(i=0; i<2; i++)
     {
        for(j=0; j<2; j++)
        {
            cout<<a[i][j] + b[i][j]<<endl;
        }
        cout<<endl;
     }
    return 0;
}