#include <iostream>
using namespace std;
int main() {
    int n, t;
    int min, max;
    cin >> n;
    
    for (int i = 0; i < n; i++) {
        cin >> t;
        if (i == 0) {
            min = t;
            max = t;
        }
        else {
            if (min > t) min = t;
            if (max < t) max = t;
        }
    }
    cout << min << " " << max << endl;
    
    return 0;
}