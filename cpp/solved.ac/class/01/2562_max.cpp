#include <iostream>
using namespace std;
int main() {
    int mi = 1, mv;
    for (int i = 1; i < 10; i++) {
        int temp;
        cin >> temp;
        if (i == 1 || mv < temp) {
            mv = temp;
            mi = i;
        }
    }
    cout << mv << "\n" << mi;
}