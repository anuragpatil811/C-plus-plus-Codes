#include<iostream>
using namespace std;

class sample {
    int x;
public:
    void get(int a) {
        x = a;
    }
    void put() {
        cout << x;
    }
    
    friend bool operator < (const sample& s1, const sample& s2);
};
bool operator < (const sample& s1, const sample& s2) {
    return s1.x < s2.x;
}

int main() {
    sample ob1, ob2;
    ob1.get(9);
    ob2.get(100);
    if (ob1 < ob2) //ob1.operator <(ob2)
        cout << "First object is small";
    else
        cout << "Second object is small";
    return 0;
}
