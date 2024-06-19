#include <iostream>
using namespace std;

int Factorial(int x) {
    int fact = 1;
    if (x > 0) {
        while (x > 0) {
            fact *= x;
            --x;
        }
    }
    return fact;
}

int main() {
    int x;
    cin >> x;
    cout << Factorial(x);
    return 0;
}

