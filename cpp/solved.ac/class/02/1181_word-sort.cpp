#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

bool compare(string a, string b) {
    if (a.length() != b.length()) return a.length() < b.length();
    else return a < b;
}

int main() {
    int n;
    vector<string> dict;
    cin >> n;
    for (int i = 0; i < n; i++) {
        bool skip = false;
        string temp;
        cin >> temp;
        for (auto j = dict.begin(); j != dict.end(); j++) {
            if (temp == *j) {
                skip = true;
                break;
            }
        }
        if(!skip) dict.push_back(temp);
    }
    sort(dict.begin(), dict.end(), compare);
    for (auto i = dict.begin(); i != dict.end(); i++) cout << *i << '\n';
    return 0;
}