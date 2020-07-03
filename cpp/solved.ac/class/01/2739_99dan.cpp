#include <iostream>
using namespace std;
int main() {
    int i;
    cin >> i;
    for (int j = 1; j <= 9; j++)
        cout << i << " * " << j << " = " << i*j << endl;
    
    return 0;
}