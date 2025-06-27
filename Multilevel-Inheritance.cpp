#include<iostream>
using namespace std;
class student
{
protected:
      int rollno;
public:
    void getrno(int a)
    {
        rollno = a;
    }
    void putrno()
    {
        cout<<"Roll number is:"<<rollno<<endl;
    }
};
class test:public student
{
    protected:
        int sub1;
        int sub2;
    public:
    void getmarks(int x, int y)
    {
        sub1 = x;
        sub2 = y;
    }
    void putmarks()
    {
        cout<<"subjet 1 marks = "<<sub1<<endl;
        cout<<"Subject 2 marks = "<<sub2<<endl;
    }
};
class result: public test
{
    int total;
public:
     void display()
     {
        total = sub1 + sub2;
        putrno();
        putmarks();
        cout<<"the total marks are="<<total<<endl;
     }
     
};
int main()
{
result r1;
r1.getrno(59);
r1.getmarks(50, 49);
r1.display();
return 0;
}