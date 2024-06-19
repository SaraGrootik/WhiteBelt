#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> v;
    while (n > 0) {
        if (n % 2 == 1) {
            v.push_back(1);
        } else {
            v.push_back(0);
        }
        n /= 2;
    }
    for (int i = v.size() - 1; i <= v.size(); --i) {
        cout << v[i];
    }

    return 0;
}