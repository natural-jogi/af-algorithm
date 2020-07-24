#include <iostream>
using namespace std;
int main() {
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    
    int n, k;
    long e = 0;
    cin >> n >> k;
    int *a = new int[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        if (e < a[i]) e = a[i];
    }
    
    long m, s, b = 1;
    while (b <= e) {
        m = (b + e) / 2;
        s = 0;
        for (int i = 0; i < n; i++) {
            if (a[i] > m) s += a[i] - m;
        }
        if (s >= k) b = m+1;
        else e = m-1;
    }
    cout << b-1;
    return 0;
}