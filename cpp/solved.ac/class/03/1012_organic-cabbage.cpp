#include <iostream>
using namespace std;
int n, m;
bool check(bool f[][50], int y, int x) {
    if (f[y][x]) {
        f[y][x] = false;
        if (x > 0) check(f,y,x-1);
        if (y > 0) check(f,y-1,x);
        if (x < m-1) check(f,y,x+1);
        if (y < n-1) check(f,y+1,x);
        return true;
    }
    return false;
}
int main() {
    int t;
    cin >> t;
    for (int i = 0; i < t; i++) {
        int k, c = 0;
        bool field[50][50] = {false,};
        cin >> m >> n >> k;
        for (int j = 0; j < k; j++) {
            int x, y;
            cin >> x >> y;
            field[y][x] = true;
        }
        for (int j = 0; j < n; j++) {
            for (k = 0; k < m; k++) {
                if (check(field,j,k)) c++;
            }
        }
        cout << c << '\n';
    }
    return 0;
}