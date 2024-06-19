#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main() {
  int q;
  cin >> q;
  vector<bool> line;
  vector<int> worrrycount;
  while (q > 0) {
    string s;
    int x;
    cin >> s;
    if (s == "WORRY") {
      cin >> x;
      line[x] = true;
    } else if (s == "QUIET") {
      cin >> x;
      line[x] = false;
    } else if (s == "COME") {
      cin >> x;
      if (x > 0) {
        while (x > 0) {
          line.push_back(false);
          --x;
        }
      } else {
        while (x < 0) {
          line.pop_back();
          ++x;
        }
      }
    } else if (s == "WORRY_COUNT") {
      cout << count(begin(line), end(line), true) << endl;
    }
    --q;
  }

  return 0;
}
