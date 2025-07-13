#include <iostream>
using namespace std;

int main()
{
    /*int day;
    cout << "Enter the value between 1 to 7: ";
    cin >> day;

    switch (day)
    {
    case 1:
        cout << "Today is Monday\n";
        break;
    case 2:
        cout << "Today is Tuesday\n";
        break;
    case 3:
        cout << "Today is Wednesday\n";
        break;
    case 4:
        cout << "Today is Thursday\n";
        break;
    case 5:
        cout << "Today is Friday\n";
        break;
    case 6:
        cout << "Today is Saturday\n";
        break;
    case 7:
        cout << "Today is Sunday\n";
        break;
    default:
        cout << "Error 404: Day not found!\n";
        break;
    } */
   int a, b;
    cout << "Enter the value between a and b: ";
    cin >>a>>b;
   char o;
    cout<<"Enter the operation:";
    cin>>o;
    switch (o)
    {
    case '+':
        cout << "Addition:"<<a+b<<endl;
        break;
    case '-':
        cout << "Subtraction:"<<a-b<<endl;
        break;
    case '*':
        cout << "Multiplication:"<<a*b<<endl;
        break;
    case '/':
        cout << "Division:"<<a/b<<endl;
        break;
    case '%':
        cout << "Modulus:"<<a%b<<endl;
        break;
    
    default:
        cout << "Error 404: not found!\n";
        break;
    }

    return 0;
}
