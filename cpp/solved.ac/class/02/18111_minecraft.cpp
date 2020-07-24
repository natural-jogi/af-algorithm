#include <iostream>
#include <climits>
using namespace std;
int main() {
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    
    int n, m, b, max = 0, min = 256;
    int a[501][501];
    cin >> n >> m >> b;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> a[i][j];
            if (max < a[i][j]) max = a[i][j];
            if (min > a[i][j]) min = a[i][j];
        }
    }
    
    int mt, mk, add, sub;
    mt = INT_MAX;
    for (int k = min; k <= max; k++) {
        add = sub = 0;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                int h = k - a[i][j];
                if (h >= 0) add += h;
                else sub -= h;
            }
        }
        if (add - sub <= b) {
            int t = add + sub*2;
            if (mt >= t) {
                mt = t;
                mk = k;
            }
        }
    }
    cout << mt << ' ' << mk;
    return 0;
}