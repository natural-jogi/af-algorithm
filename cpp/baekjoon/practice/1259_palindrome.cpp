#include <iostream>
#include <string>
using namespace std;

int main() {
    string input, temp,  result = "";
    
    while(1) {
        cin >> input;
        if (input == "0") break;
        
        for (int i = 0; i < input.size()/2; i++) {
            temp = "yes\n";
            if (input[i] != input[input.size()-1-i])
                temp = "no\n";
        }
        result += temp;
    }
    cout << result;
    return 0;
}