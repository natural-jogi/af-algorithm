#include <iostream>
using namespace std;
int main() {
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    int t;
    cin >> t;
    for (int i = 0; i < t; i++) {
        int k, n;
        cin >> k >> n;
        int *temp = new int[n+1];
        temp[1] = 1;
        for (int j = 2; j <= n; j++) temp[j] = j;
        for (int j = 1; j <= k; j++) {
            for (int l = 2; l <= n; l++) {
                temp[l] += temp[l-1];
            }
        }
        cout << temp[n] << '\n';
    }
    return 0;
}