#include<iostream>
using namespace std;
inline int area(int s)
{
    return s * s;
}
int main()
{
    int y, x;
    cout<<"Enter the  side value for square:";
    cin>>y;
    x = area(y);
    cout<<"The area of  square is:"<<x;
   x = area(8); // x = 8*8
   cout<<x;
   x = area(3);
   cout<<x;

}