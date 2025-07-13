#include<iostream>
using namespace std;
int main()
{
   int a[5], i;
  cout<<"Enter the values:"<<endl;
  for(i=0; i<10; i++)
  {
    cin >> a[i];
  }
  cout<<"Elements of array are:"<<endl;  
  for(i=0; i<10; i++)
  {
    cout << a[i]<<endl;
  }
  return 0;
}