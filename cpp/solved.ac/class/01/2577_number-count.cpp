#include <iostream>
using namespace std;

int main() {
    int A, B, C;
    int digits[10] = {0,};
    unsigned long long result, tens;
    
    cin >> A >> B >> C;
    result = A * B * C;
    for (tens = 1; result / tens != 0;) {
        digits[result / tens % 10]++;
        tens *= 10;
    }
    for (int i = 0; i < 10; i++) {
        cout << digits[i] <<endl;
    }
    return 0;
}