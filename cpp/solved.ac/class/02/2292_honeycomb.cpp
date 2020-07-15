#include <iostream>
using namespace std;
int main() {
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    int n, l = 1, h = 2, i = 0;
    cin >> n;
    while (++i) {
        if (l <= n && n < h) {
            cout << i;
            break;
        }
        else {
            l = h;
            h += 6*i;
        }
    }
    return 0;
}