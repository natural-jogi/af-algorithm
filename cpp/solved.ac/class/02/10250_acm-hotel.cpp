#include <iostream>
using namespace std;
int main() {
    int t, h, w, n;
    cin >> t;
    for (int i = 0; i < t; i++) {
        cin >> h >> w >> n;
        int a = n % h == 0 ? h : n % h;
        int b = n % h == 0 ? n / h : n / h + 1;
        cout << a;
        if (b < 10) cout << 0;
        cout << b << '\n';
    }
}