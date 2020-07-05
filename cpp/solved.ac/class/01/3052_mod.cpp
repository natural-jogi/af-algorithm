#include <iostream>
#include <vector>
using namespace std;
int main() {
    int t;
    bool isDup;
    vector<int> m;
    for (int i = 0; i < 10; i++) {
        cin >> t;
        isDup = false;
        for (auto j = m.begin(); j != m.end(); j++) {
            if (*j == t % 42) {
                isDup = true;
                break;
            }
        }
        if (!isDup) {
            m.push_back(t % 42);
        }
    }
    cout << m.size();
    return 0;
}