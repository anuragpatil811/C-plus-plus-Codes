#include<iostream>
using namespace std;
int add(int, int); 
int main()
{
    int c;
    cout << "Before function call" << endl;
    /*add(4, 7); 
    add(7, 2); */
    cout << "After function call"<<add(3, 4)<<endl;
    c = add(8, 2);
    cout<<"Using the return statement"<<c<<endl;
    return 0;
}
int add(int a, int b)
{
    return(a+b);
}

