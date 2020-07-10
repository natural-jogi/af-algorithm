#include <iostream>
#include <cmath>
using namespace std;
int main() {
    int N, r, c;
    int a = 0;
    cin >> N >> r >> c;
    for (int i = 1; i <= N; i++) {
        int t = pow(2,N-i);
        a <<= 2;
        if (r < t) {
            if (c < t) a += 0b00;
            else a += 0b01, c -= t;
        }
        else {
            if (c < t) a += 0b10;
            else a += 0b11, c -= t;
            r -= t;
        }
    }
    cout << a;
    return 0;
}