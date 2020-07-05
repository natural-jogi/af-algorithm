#include <iostream>
using namespace std;
int main() {
    int status = 1; //1mix 2asc 3desc
    int t;
    for (int i = 1; i <= 8; i++) {
        cin >> t;
        if (i == 1) {
            if (t == 1) status = 2;
            if (t == 8) status = 3;
        }
        else {
            if (status == 2 && i != t) status = 1;
            else if (status == 3 && i != 9-t) status = 1;
        }
    }
    switch (status) {
        case 1 : cout << "mixed"; break;
        case 2 : cout << "ascending"; break;
        case 3 : cout << "descending";
    }
    return 0;
}