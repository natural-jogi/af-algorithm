#include <iostream>
#include <queue>
using namespace std;
typedef struct _Data {
    int i;
    int p;
} Data;

int main() {
    int t;
    cin >> t;
    for (int i = 0; i < t; i++) {
        int n, m, c = 0;
        cin >> n >> m;
        queue<Data> printer;
        for (int j = 0; j < n; j++) {
            Data temp;
            temp.i = j;
            cin >> temp.p;
            printer.push(temp);
        }
        while (1) {
            bool noPop = true;
            while (noPop) {
                queue<Data> temp = printer;
                noPop = false;
                while (temp.size() > 1) {
                    temp.pop();
                    if(printer.front().p < temp.front().p) {
                        printer.push(printer.front());
                        printer.pop();
                        noPop = true;
                    }
                }
            }
            c++;
            if(printer.front().i == m) break;
            else printer.pop();
        }
        cout << c << '\n';
    }
    return 0;
}