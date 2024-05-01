#include <iostream>
using namespace std;

int main() {
    double a, b, n, x, y;
    cout << "ENTER N: ";
    cin >> n;
    cout << "ENTER A: ";
    cin >> a;
    cout << "ENTER B: ";
    cin >> b;
    cout << "ENTER X: ";
    cin >> x;
    cout << "ENTER Y: ";
    cin >> y;

    if (n > a || n > b) {
        if (a >= b) {
            if (n >= b && n <= a) {
                n -= (n / 100) * y;
                cout << "PRICE: " << n;
            } else {
                n -= (n / 100) * x;
                cout << "PRICE: " << n;
            }
        }
        else {
            if (n <= b && n >= a) {
                n -= (n / 100) * x;
                cout << "PRICE: " << n;
            } else {
                n -= (n / 100) * y;
                cout << "PRICE: " << n;
            }
        }
    } else {
        cout << n;
    }

    return 0;
}