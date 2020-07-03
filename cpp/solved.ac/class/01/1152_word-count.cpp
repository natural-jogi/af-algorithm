#include <iostream>
#include <string>
using namespace std;

int main() {
    string input;
    int count = 0;
    bool isSpace = true;
    
    getline(cin, input);
    for (int i = 0; i < input.size(); i++) {
        if (isSpace) {
            if (input[i] != ' ') {
                isSpace = false;
                count++;
            }
        }
        else {
            if (input[i] == ' ') isSpace = true;
        }
    }
    
    cout << count << endl;
    return 0;
}