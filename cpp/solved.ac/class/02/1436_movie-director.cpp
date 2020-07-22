#include <iostream>
using namespace std;
bool check(int v) {
    int c = 0;
    while (v) {
        if (v%10 == 6) c++;
        else c = 0;
        if (c == 3) return true;
        v /= 10;
    }
    return false;
}
int main() {
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    
    int n, i = 0, t = 665;
    cin >> n;
    while (n != i) if (check(++t)) i++;
    cout << t;
    return 0;
}