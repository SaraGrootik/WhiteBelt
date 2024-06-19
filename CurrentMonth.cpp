#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    const vector<int> qtyOfDays{31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int currentMonth{0};
    int q{};
    cin >> q;
    vector<vector<string>> listForCurrentMonth(31);
    string command;
    while (q > 0) {
        cin >> command;
        if (command == "ADD") {
            int day{};
            string toDo;
            cin >> day >> toDo;
            listForCurrentMonth[day - 1].push_back(toDo);
        } else if (command == "DUMP") {
            int day{};
            cin >> day;
            cout << listForCurrentMonth[day - 1].size() << " " ;
            for(const auto& item : listForCurrentMonth[day - 1]) {
                cout << item << " ";
            }
        } else if (command == "NEXT") {
            if (qtyOfDays[currentMonth] > qtyOfDays[currentMonth + 1]) {
                for (int i = qtyOfDays[currentMonth + 1] + 1; i <= qtyOfDays[currentMonth]; ++i) {
                    for (const auto& x : listForCurrentMonth[i - 1]) {
                        listForCurrentMonth[qtyOfDays[currentMonth + 1] - 1].push_back(x);
                    }
                    listForCurrentMonth[i - 1].clear();
                }
            }
            ++currentMonth;
        } else {
            cout << "The command inserted cannot be found. ERROR 404" << endl;
        }
        --q;
    }

    return 0;
}
