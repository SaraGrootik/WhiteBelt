#include <iostream>
#include <map>
#include <string>

using namespace std;

bool is_annagram(const string& s,const string& x) {
    map<char, int> s1, s2;
    for (auto item : s) {
        ++s1[item];
    }
    for (auto item : x) {
        ++s2[item];
    }
    if (s1 == s2) {
        return true;
    }
    return false;
}

int main() {
    int n;
    cin >> n;
    while (n > 0) {
        string s1, s2;
        cin >> s1 >> s2;
        if (is_annagram(s1, s2) == true) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
        --n;
    }

    return 0;
}
