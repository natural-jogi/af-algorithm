#include <iostream>
#include <cmath>
using namespace std;

bool b[10] = {false, };

bool isBroken(int v) {
    if (v == 0) return b[0];
    while (v) {
        if (b[v%10]) return true;
        v /= 10;
    }
    return false;
}

int digit(int v) {
    if (v == 0) return 1;
    int c = 0;
    while (v) {
        v /= 10;
        c++;
    }
    return c;
}

int main() {
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    int n, m;
    cin >> n >> m;
    for (int i = 0; i < m; i++) {
        int t;
        cin >> t;
        if (!b[t]) b[t] = true;
    }
    
    int low = n+1, high = n-1;
    bool lDone = false, hDone = false;
    while (!lDone && low > 0) if (!isBroken(--low)) lDone = true;
    while (!hDone && high < 1000000) if (!isBroken(++high)) hDone = true;
    
    int best = abs(n-100);
    low = digit(low) + abs(n-low);
    high = digit(high) + abs(n-high);
    if (lDone && best > low) best = low;
    if (hDone && best > high) best = high;
    cout << best;
    
    return 0;
}