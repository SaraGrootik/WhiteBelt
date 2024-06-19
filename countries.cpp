#include <iostream>
#include <string>
#include <map>

using namespace std;

int main() {
    int q;
    cin >> q;

    map<string, string> countries;

    for (int i = 0; i < q; ++i) {
        string command;
        cin >> command;
        if (command == "DUMP") {
            for (const auto& x : countries) {
                cout << x.first << "/" << x.second << endl;
            }
        } else if (command == "ABOUT") {
            string country;
            cin >> country;
            auto x = countries.find(country);
            if (x == countries.end()) {
                cout << "Country " << country << " doesn't exist." << endl;
            } else {
                cout << "Country " << x->first << " has capital " << x->second << endl;
            }
        } else if (command == "RENAME") {
            string old_country, new_country;
            cin >> old_country >> new_country;
            if (old_country == new_country ||
                countries.find(old_country) == countries.end() ||
                countries.find(new_country) != countries.end()) {
                cout << "Incorrect rename, skip " << endl;
            } else {
                const string capital = countries[old_country];
                countries.erase(old_country);
                countries[new_country] = capital;
                cout << "Country " << old_country << " with capital " << capital << " has been renamed to " <<
                new_country << endl;
            }
        } else if (command == "CHANGE_CAPITAL") {
            string country, new_capital;
            cin >> country >> new_capital;
            if (countries.find(country) == countries.end()) {
                countries[country] = new_capital;
                cout << "Introduce new country " << country << " with capital " << new_capital << endl;
            } else if (countries[country] == new_capital) {
                cout << "Country " << country << "hasn't changed its capital." << endl;
            } else {
                string old_capital = countries[country];
                countries[country] = new_capital;
                cout << "Country " << country << "has changed its capital from " << old_capital << "to " <<
                new_capital << endl;
            }
        }
    }

    return 0;
}