#include <iostream>
using namespace std;
int main() {
    int n, k, nu = 1, de = 1;
    cin >> n >> k;
    k = n - k < k ? n - k : k;
    for (int i = 1; i <= k; i++) {
        nu *= n - i + 1;
        de *= i;
    } 
    cout << nu/de;
    return 0;
}