#include <iostream>
#include <string>
using namespace std;

int main() {
    string input;
    int maxCnt = 0, maxIdx = 0;
    int count[26] = {0,};
    bool isDup = false;
    
    cin >> input;
    for (int i = 0; i < input.size(); i++) {
        input[i] = toupper(input[i]);
        count[int(input[i])-'A']++;
    }
    for (int i = 0; i < 26; i++) {
        if (maxCnt < count[i]) {
            isDup = false;
            maxCnt = count[i];
            maxIdx = i;
        }
        else if (maxCnt == count[i]) {
            isDup = true;
        }
    }
    if (isDup) cout << "?" << endl;
    else cout << char(maxIdx + 'A') << endl;
    
    return 0;
}