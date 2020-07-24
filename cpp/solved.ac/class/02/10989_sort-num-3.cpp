#include <iostream>
using namespace std;
int main() {
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    
    int n, t, m = 0;
    int c[10001] = {0,};
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> t;
        c[t]++;
        if (m < t) m = t;
    }
    for (int i = 1; i <= m; i++) {
        if (c[i]) while (c[i]--) cout << i << '\n';
    }
    return 0;
}