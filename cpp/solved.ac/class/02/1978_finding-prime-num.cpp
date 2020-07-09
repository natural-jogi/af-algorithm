#include <iostream>
using namespace std;
int main() {
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    int n, c = 0;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int t;
        cin >> t;
        if (t == 1) continue;
        bool isP = true;
        for (int p = 2; p*p <= t; p++) {
            if (!(t % p)) {
                isP = false;
                break;
            }
        }
        if (isP) c++;
    }
    cout << c << '\n';
    return 0;
}