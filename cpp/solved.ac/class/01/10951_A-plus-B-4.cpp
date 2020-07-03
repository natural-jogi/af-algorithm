#include <iostream>
using namespace std;
int main() {
    int t1, t2;
    while(1) {
        cin >> t1 >> t2;
        if (cin.eof()) break;
        cout << t1 + t2 << endl;
    }
    return 0;
}