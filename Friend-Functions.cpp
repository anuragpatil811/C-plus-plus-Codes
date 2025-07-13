#include<iostream>
using namespace std;

class bcd; // Forward declaration

class abc
{
    int x;
public:
    void setx(int i)
    {
        x = i;
    }   
    friend void max(abc h, bcd j);
};

class bcd
{
    int y;
public:
    void sety(int i)
    {
        y = i;
    }
    friend void max(abc h, bcd j);
};

void max(abc h, bcd j)
{
    if(h.x >= j.y)
        cout << h.x;
    else
        cout << j.y;
}

int main()
{
    abc a;
    bcd b;
    a.setx(45);
    b.sety(89);
    max(a, b);
    return 0;
}
