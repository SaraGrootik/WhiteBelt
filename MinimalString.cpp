#include <iostream>
#include <string>
using namespace std;

int main() {
    string a, b, c;
    cin >> a >> b >> c;
    if (a <= b && a <= c) {
        cout << "1: " << a;
    } else if (b <= a && b <= c) {
        cout << "2: " << b;
    } else {
        cout << "3: " << c;
    }
    return 0;
}