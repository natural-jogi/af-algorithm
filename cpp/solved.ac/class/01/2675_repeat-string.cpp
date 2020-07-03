#include <iostream>
#include <string>
using namespace std;
int main() {
    int t, r;
    string s;
    cin >> t;
    for (int k = 0; k < t; k++) {
        cin >> r >> s;
        if (cin.eof()) break;
        for (int i = 0; i < s.size(); i++)
            for (int j = 0; j < r; j++)
                cout << s[i];
        cout << "\n";
    }
    return 0;
}