#include <iostream>
#include <string>
#include <vector>
using namespace std;

bool IsPalindrom(string s) {
    for (int i = 0; i < s.size() / 2; ++i) {
        if (s[i] != s[s.size() - i - 1]) {
            return false;
        }
    }
    return true;
}

vector<string> PalindromeFilter(vector<string> words, int minLength) {
    vector<string> pwords;
    for (int i = 0; i < words.size(); ++i) {
        if (IsPalindrom(words[i]) && words[i].size() >= minLength) {
            pwords.push_back(words[i]);
        }
    }
    return pwords;
}

int main() {
    const int SIZE = 2;
    vector<string> words(SIZE);
    int minLength;
    cin >> minLength;
    for (int i = 0; i < words.size(); ++i) {
        cin >> words[i];
    }
    vector<string> v = PalindromeFilter(words, minLength);
    for (int i = 0; i < v.size(); ++i) {
        cout << v[i] << " ";
    }

    return 0;
}
