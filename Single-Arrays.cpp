#include<iostream>
using namespace std;
int main()
{
  int a[50], i;
  //int n, i,  sum=0, j;
  //int n, sum=0;
  int n, esum=0;
  //int large;
 // float avg;
  cout<<"Enter the total number of elements:";
  cin>>n;
  for(i=0; i<n; i++)
  {
    cin>>a[i];
  }
  int j;
   for(j=0; j<n; j++)
  {
    if(a[j]%2==0)
     esum = esum + a[j];
  }
  cout<<"the sum of even elements"<<esum;
 /* large = a[0]; //assumption that first element is the largest of the array
  for(int j=1; j<n; j++)
  {
    if(a[j] > large)
    {
      large = a[j];
    }
  } */
 // cout<<"the largest element in the array is:"<<large;
  /*for(j=0; j<n; j++)
  {
    sum = sum + a[j];
  }
  cout<<sum;
  avg = sum/n;
  cout<<"The average of the elemnts of array is:"<<avg; */
  return 0;
}