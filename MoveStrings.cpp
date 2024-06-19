#include <iostream>
#include <vector>
#include <string>
using namespace std;

void MoveStrings(vector<string>& v, vector<string>& w) {
    for (const auto& x : v) {
        w.push_back(x);
    }
    v.clear();
}

int main() {
    vector<string> source {"a", "b", "c"};
    vector<string> destination {"x"};
    MoveStrings(source, destination);
    for (const auto& x : destination) {
        cout << x;
    }

    return 0;
}