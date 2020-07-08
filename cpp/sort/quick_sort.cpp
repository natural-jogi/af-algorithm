#include <iostream>
using namespace std;
void sw(int *a, int *b) {
    int t = *a;
    *a = *b;
    *b = t;
}
void s(int *a, int *b) {
    if (a < b) {
        int p = *a;
        int *l = a;
        int *h = b;
        while(l <= h) {
            while (*(++l) < p && l <= h);
            while (*(--h) > p && l <= h);
            if (l < h) sw(l,h);
        }
        sw(a,h);
        s(a,h), s(h+1,b);
    }
}
int main() {
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    int n;
    cin >> n;
    int *num = new int[n];
    for (int i = 0; i < n; i++) {
        int temp;
        cin >> temp;
        num[i] = temp;
    }
    s(num, num+n);
    for (int i = 0; i != n; i++) cout << num[i] << '\n';
    return 0;
}