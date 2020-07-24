#include <iostream>
#include <stack>
using namespace std;
int main() {
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    
    int k;
    stack<int> r;
    cin >> k;
    
    for (int i = 0; i < k; i++) {
        int t;
        cin >> t;
        if (t) r.push(t);
        else r.pop();
    }
    
    int s = 0;
    while (!r.empty()) {
        s += r.top();
        r.pop();
    }
    cout << s;
    return 0;
}