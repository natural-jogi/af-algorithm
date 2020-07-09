// BINARY SEARCH
#include <iostream>
#include <algorithm>
using namespace std;
int a[100000], s[100000];
int search(int i, int j, int v) {
    if (i > j) return 0;
    if (v < a[i] || a[j] < v) return 0;
    if (v == a[i] || a[j] == v) return 1;
    int m = (i + j)/2;
    if (a[m] == v) return 1;
    if (a[m] > v) return search(i,m-1,v);
    else if(a[m] < v) return search(m+1,j,v);
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
    for (int i = 0; i < m; i++) cout << search(0,n-1,s[i]) << '\n';
    return 0;
}