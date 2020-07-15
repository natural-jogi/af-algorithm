#include <iostream>
using namespace std;
int main() {
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    int i, l;
    long long a = 1, h = 0, m = 1234567891;
    char c[50];
    cin >> l >> c;
    for (i = 0; i < l; i++, a=a*31%m) h = (h + (c[i] - 'a' + 1) * a) % m;
    cout << h;
    return 0;
}