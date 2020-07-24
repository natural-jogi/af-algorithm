#include <iostream>
#include <string>
#include <stack>
using namespace std;

int main() {
    int n, p = 1;
    stack<int> s;
    string c = "";
    cin >> n;
    
    for (int i = 0; i < n; i++) {
        int t;
        cin >> t;
        if (p <= t) {
            while (p <= t) {
                s.push(p++);
                c += "+\n";
            }
            s.pop();
            c += "-\n";
        }
        else if (!s.empty() && s.top() >= t) {
            bool flag = true;
            while (!s.empty() && flag) {
                if (s.top() == t) flag = false;
                s.pop();
                c += "-\n";
            }
            if (flag) {
                cout << "NO";
                return 0;
            }
        }
        else {
            cout << "NO";
            return 0;
        }
    }
    cout << c;
    return 0;
}