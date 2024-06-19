#include <iostream>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    int MCD;

    for (int i = 1; i <= a || i <= b; ++i) {
        if (a % i == 0 && b % i == 0) {
            MCD = i;
        }
    }
    cout << MCD;

    return 0;
}

