#include<iostream>
using namespace std;

int n; // Global variable

int& test(); // Function prototype with reference return

int main()
{
    test() = 5; // Now modifies 'n' directly
    cout << n;  // Output: 5
    return 0;
}

int& test() // Function returns a reference to 'n'
{
    return n;
}
