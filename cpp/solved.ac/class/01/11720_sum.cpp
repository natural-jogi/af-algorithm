#include <iostream>
using namespace std;
int main() {
    int n, sum = 0;
    char s[100];
    cin >> n >> s;
    for (int i = 0; i < n; i++) {
        sum += s[i] - '0';
    }
    cout << sum;
    return 0;
}