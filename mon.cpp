#include <iostream>
using namespace std;

int x = 0;  // global (like f’s x)

int h() {
    return x;  // uses the x visible where h is defined (global x)
}

int g() {
    int x = 5;  // local to g, but h() doesn't see this one
    return h(); // calls h, which uses the global x
}

int f() {
    return g(); // f calls g, g calls h
}

int main() {
    cout << f() << endl;  // prints 0
    return 0;
}
