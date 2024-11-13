#include <iostream>
using namespace std;

int GCD(int a, int b) {
    if (a == 0) {
        return b;
    }
    if (b == 0) {
        return a;
    }
    if (a == b) {
        return a;
    }

    if (a > b) {
        return GCD(a - b, b);
    } else {
        return GCD(a, b - a);
    }
}

int main() {
    cout << GCD(30, 10) << endl;
    return 0;
}
