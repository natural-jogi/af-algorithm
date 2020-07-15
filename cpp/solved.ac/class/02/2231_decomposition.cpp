#include <iostream>
using namespace std;
int main() {
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    int n, s, t, m = 0;
    bool yes = false;
    cin >> n;
    while (m < n) {
        s = 0, t = ++m;
        while (t) {
            s += t%10;
            t/=10;
        }
        if (s+m == n) {
            yes = true;
            break;
        }
    }
    if (yes) cout << m;
    else cout << 0;
    return 0;
}