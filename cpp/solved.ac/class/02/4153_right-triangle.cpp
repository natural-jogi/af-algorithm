#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    while (1) {
        int a[3];
        cin >> a[0] >> a[1] >> a[2];
        if (!a[0]) break;
        sort(a,a+3);
        if (a[0]*a[0]+a[1]*a[1]==a[2]*a[2]) cout << "right\n";
        else cout << "wrong\n";
    }
    return 0;
}