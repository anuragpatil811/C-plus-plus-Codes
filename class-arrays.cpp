#include<iostream>
using namespace std;
class student
{
    char name[20];
    int age;
    public:
    void getdata()
    {
        cout<<"Enter the name of the student:"<<endl;
        cin>>name;
        cout<<"Enter the age:"<<endl;
        cin>>age;
    }
    void putdata()
    {
        cout<<"the name of the student is:"<<name<<endl;
        cout<<"the age of the student is:"<<age<<endl;
    }
};
int main()
{
    student s[3];
    int i;
    for(i=0; i<3; i++)
    {
        s[i].getdata();
    }
    for(i=0; i<3; i++)
    {
        s[i].putdata();
    }
    return 0;
}