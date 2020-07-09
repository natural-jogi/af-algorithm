#include <iostream>
#include <queue>
using namespace std;
int main() {
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    int n;
    queue<int> c;
    cin >> n;
    for (int i = 1; i <= n; i++) c.push(i);
    while (c.size() != 1) {
        c.pop();
        c.push(c.front());
        c.pop();
    }
    cout << c.front();
    return 0;
}