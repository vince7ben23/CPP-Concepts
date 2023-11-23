#include <iostream>
using namespace std;
class A {
public:
    int val;
    A(int n=0) { 
        val = n;
        // cout << "constructor called" << endl;
    }
    A & GetObj() {
        return *this;
    }
};
int main() {
    A a;
    cout << a.val << endl;
    a.GetObj() = 5; // call constructor A(5) to generate a temp object, then assign to object a
    cout << a.val << endl;
    return 0;
}