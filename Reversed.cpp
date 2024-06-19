#include <iostream>
#include <vector>
using namespace std;

vector<int> Reversed(const vector<int>& v) {
    vector<int> w;
    for (int i = v.size() - 1; i < v.size(); --i) {
        w.push_back(v[i]);
    }
    return w;
}

int main() {
    vector<int> w {1, 5, 3, 4, 2};
    w = Reversed(w);
    for (auto x : w) {
        cout << x << " ";
    }

    return 0;
}
