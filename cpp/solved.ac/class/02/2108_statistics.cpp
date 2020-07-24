#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;
int most(int *a, int *b) {
    int m = 0, r = *a;
    int *s = a;
    bool k = true;
    for (int *e = a+1; e != b+1; e++) {
        if (*e != *s) {
            if (m < e-s) m = e-s, k = true, r = *s;
            else if (m == e-s && k) k = false, r = *s;
            s = e;
        }
    }
    return r;
}
int main() {
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    
    int n, t = 0;
    cin >> n;
    int *a = new int[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        t += a[i];
    }
    
    sort(a, a+n);
    
    cout << round((double)t/n) << '\n' << a[n/2] << '\n' << most(a,a+n) << '\n' << a[n-1]-a[0];
    
    return 0;
}