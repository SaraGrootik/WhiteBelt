#include <iostream>
#include <string>
using namespace std;

bool IsPalindrome(string w) {
    string s2;
    for (int i = w.size() - 1; i < w.size(); --i) {
        s2.push_back(w[i]);
    }
    if (w == s2) {
        return true;
    }
    return false;
}

int main() {
    string s;
    cin >> s;

    cout << IsPalindrome(s);

    return 0;
}
