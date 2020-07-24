#include <iostream>
#include <vector>
using namespace std;

vector<int> p;

bool isP(int v) {
    for (auto i = p.begin(); i != p.end() && (*i)*(*i) <= v; i++) {
        if (v % (*i) == 0) return false;
    }
    p.push_back(v);
    return true;
}

int main() {
    cin.tie(NULL);cout.tie(NULL);
    ios::sync_with_stdio(false);
    
    int m, n;
    cin >> m >> n;
    
    for (int i = 2; i <= n; i++) {
        if (isP(i) && i >= m) cout << i << '\n';
    }
    return 0;
}