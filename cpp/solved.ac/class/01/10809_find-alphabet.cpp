#include <iostream>
#include <cstring>
using namespace std;
int main() {
    char s[100];
    cin >> s;
    for (char c = 'a'; c <= 'z'; c++) {
        int t = -1;
        for (int i = 0; i < strlen(s); i++) {
            if (s[i] == c) {
                t = i;
                break;
            }
        }
        cout << t << " ";
    }
    return 0;
}