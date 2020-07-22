#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    
    int n;
    int a[50][2];
    cin >> n;
    for (int i = 0; i < n; i++) cin >> a[i][0] >> a[i][1];
    
    for (int i = 0; i < n; i++) {
        int r = 1;
        for (int j = 0; j < n; j++) {
            if (i == j) continue;
            if (a[i][0] < a[j][0] && a[i][1] < a[j][1]) r++;
        }
        cout << r << ' ';
    }
    return 0;
}