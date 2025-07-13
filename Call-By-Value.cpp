#include <iostream>
using namespace std;

void swap(int x, int y) 
{
    int temp = x;
    x = y;
    y = temp;
    cout << "The values inside function: " << x << " " << y << endl;
}

int main()
{
    int a = 9, b = 10;
    
    cout << "The values of variables before swapping" << endl;
    cout << a << " " << b << endl;
    
    swap(a, b);  // Now the actual values will be swapped
    
    cout << "The values after swapping" << endl;
    cout << a << " " << b << endl;

    return 0;
}
