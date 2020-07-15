#include <iostream>
using namespace std;
int main() {
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    int n, t, i = -1;
    bool y = false;
    cin >> n;
    do {
        t = (n-3*(++i))%5;
    } while (t > 0);
    if (t) cout << -1;
    else cout << i + (n-3*i)/5;
    return 0;
}