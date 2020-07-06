#include <iostream>
using namespace std;
int main() {
    int a, b;
    int gcd;
    cin >> a >> b;
    gcd = a;
    while(gcd % b) gcd += a;
    cout << a * b / gcd << '\n' << gcd;
    return 0;
}