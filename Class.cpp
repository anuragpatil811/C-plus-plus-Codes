#include<iostream>
using namespace std;
class student
{
    //int marks, marks2;
int marks;
public:
//int marks;
//int sum;
int r;
void getmarks()
{
    cout<<"Enter the student marks:"<<endl;
    //cin>>marks>>marks2;
    cin>>marks;
}
void putmarks()
{
    cout<<"The student marks:"<<endl;
    cout<<marks;
   // sum = marks + marks2;
}
};
int main()
{
   student s;
  // s.marks = 45;
   //cout<<"the students marks is"<<s.marks<<endl;
   s.r = 1;
   cout<<s.r;
   s.getmarks();
   s.putmarks();
    return 0;
}