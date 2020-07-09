#include <iostream>
#include <string>
using namespace std;
int main() {
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int c = 0;
        string t;
        cin >> t;
        for (int j = 0; j < t.size(); j++) {
            if (t[j] == '(') c++;
            else if (t[j] == ')') c--;
            if (c < 0) break;
        }
        if (!c) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}