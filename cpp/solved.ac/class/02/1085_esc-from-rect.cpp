#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    int x, y, w, h;
    cin >> x >> y >> w >> h;
    int r[4] = {x, w-x, y, h-y};
    cout << *(min_element(r, r+4));
    
    return 0;
}