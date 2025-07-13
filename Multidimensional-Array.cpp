#include<iostream>
using namespace std;
int main()
{
    int a[2][2];
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
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
     }
    return 0;
}