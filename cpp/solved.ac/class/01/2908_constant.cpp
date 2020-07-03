#include <iostream>
using namespace std;
int main() {
    int a, b;
    bool isABig = false;
    cin >> a >> b;
    for (int i = 1; i <= 100; i *= 10) {
        if (a/i%10 == b/i%10) continue;
        else if (a/i%10 > b/i%10) {
            isABig = true;
            break;
        }
        else {
            break;
        }
    }
    if(isABig) cout << (a%10)*100+a/100+a%100-a%10;
    else cout << (b%10)*100+b/100+b%100-b%10;
    return 0;
}