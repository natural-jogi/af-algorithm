#include <iostream>
#include <vector>
using namespace std;
int main() {
    int n, t, m;
    float a = 0;
    vector<int> s;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> t;
        s.push_back(t);
        if (i == 0 || m < t) m = t;
    }
    for (auto i = s.begin(); i != s.end(); i++) {
        a += (float)*i / m * 100;
    }
    cout << a / n;
    return 0;
}