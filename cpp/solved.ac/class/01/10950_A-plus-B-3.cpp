#include <iostream>
#include <vector>
using namespace std;
int main() {
    int n, t1, t2;
    cin >> n;
    
    vector<int> r(n);
    for (int i = 0; i < n; i++) {
        cin >> t1 >> t2;
        r[i] = t1 + t2;
    }
    for (int i : r) cout << i << endl;
    
    return 0;
}