#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> climate(n);
    double mean = 0;
    for (int i = 0; i < climate.size(); ++i) {
        cin >> climate[i];
        mean += climate[i];
    }
    mean /= n;
    int x = 0;
    for (int i = 0; i < climate.size(); ++i) {
        if (climate[i] > mean) {
            cout << i << " ";
            ++x;
        }
    }
    cout << endl;
    cout << x;
    return 0;
}
