#include <iostream>
using namespace std;
int main() {
    int n, k;
    cin >> n >> k;
    int *a = new int[n];
    int *r = new int[n];
    for (int i = 0; i < n; i++) a[i] = i+1;
    cout << '<';
    int idx = 0;
    for (int i = 0; i < n; i++) {
        int c = 0;
        while (c != k) {
            if (idx == n) idx = 0;
            if (a[idx++]) c++;
        }
        if (i != 0) cout << ", ";
        cout << a[idx-1];
        a[idx-1] = 0;
    }
    cout << '>';
    return 0;
}