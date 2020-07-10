// LOWER BOUND, UPPER BOUND
#include <iostream>
#include <algorithm>
using namespace std;
int a[500000], s[500000];
int lBound(int i, int j, int v) {
    while (i < j) {
        int m = (i + j)/2;
        if (a[m] >= v) j = m;
        else i = m+1;
    }
    return i;
}
int uBound(int i, int j, int v) {
    while (i < j) {
        int m = (i + j)/2;
        if (a[m] > v) j = m;
        else i = m+1;
    }
    return i;
}
int main() {
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    int n, m;
    cin >> n;
    for (int i = 0; i < n; i++) cin >> a[i];
    sort(a,a+n);
    cin >> m;
    for (int i = 0; i < m; i++) cin >> s[i];
    for (int i = 0; i < m; i++) cout << uBound(0,n,s[i])-lBound(0,n,s[i]) << ' ';
    return 0;
}