#include <iostream>
using namespace std;
int main() {
    int n, m, a = 10;
    int c[100];
    cin >> n >> m;
    for (int i = 0; i < n; i++) cin >> c[i];
    loop :
    for (int i = 0; i < n; i++) {
        for (int j = i+1; j < n; j++) {
            for (int k = j+1; k < n; k++) {
                int t = c[i]+c[j]+c[k];
                if (t <= m && t > a) a = t;
            }
        }
    }
    cout << a;
    return 0;
}