#include <iostream>
#include <cstring>
using namespace std;
int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        char t[80];
        int ts = 0, s = 0;
        cin >> t;
        for (int j = 0; j < strlen(t); j++) {
            if (t[j] == 'O') s += ++ts;
            else ts = 0;
        }
        cout << s << "\n";
    }
}