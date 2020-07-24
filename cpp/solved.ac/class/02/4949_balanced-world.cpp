#include <iostream>
#include <string>
#include <stack>
using namespace std;
int main() {
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    
    while (1) {
        string a;
        stack<char> b;
        bool no = false;
        
        getline(cin, a);
        if (a == ".") break;
        for (int i = 0; i < a.length(); i++) {
            if (a[i] == '[' || a[i] == '(') b.push(a[i]);
            else if (a[i] == ']' || a[i] == ')') {
                if (!b.empty() && (a[i] == ']' && b.top() == '[' || a[i] == ')' && b.top() == '(')) b.pop();
                else no = true;
            }
            if (no) break;
        }
        if (no || !b.empty()) cout << "no\n";
        else cout << "yes\n";
    }
    return 0;
}