#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cin >> s;
    int n = -2;

    for (int i = 0; i < s.size(); ++i) {
        if (s[i] == 'f') {
            if (n == -2) {
                n = -1;
            } else if (n == -1) {
                n = i;
                break;
            }
        }
    }
    cout << n;
    return 0;
}
