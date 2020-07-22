#include <iostream>
#include <algorithm>
using namespace std;
struct C {
    int x, y;
};
bool cmp(C a, C b) {
    if (a.y == b.y) return a.x < b.x;
    return a.y < b.y;
}
int main() {
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    
    int n;
    cin >> n;
    C *c = new C[n];
    for (int i = 0; i < n; i++) cin >> c[i].x >> c[i].y;
    
    sort(c, c+n, cmp);
    
    for (int i = 0; i < n; i++) cout << c[i].x << ' ' << c[i].y << '\n';
    
    return 0;
}