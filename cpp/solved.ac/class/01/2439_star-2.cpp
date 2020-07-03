#include <iostream>
using namespace std;
int main() {
    int i;
    cin >> i;
    for (int j = 1; j <= i; j++) {
        for (int l = 1; l <= i-j; l++)
            cout << " ";
        for (int k = 1; k <= j; k++)
            cout << "*";
        cout << endl;
    }
    return 0;
}