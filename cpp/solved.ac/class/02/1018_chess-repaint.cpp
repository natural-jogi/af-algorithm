#include <iostream>
#include <string>
using namespace std;
int main() {
    int n, m;
    char board[50][50];
    string pattern[2][8] = {
        {
            "BWBWBWBW",
            "WBWBWBWB",
            "BWBWBWBW",
            "WBWBWBWB",
            "BWBWBWBW",
            "WBWBWBWB",
            "BWBWBWBW",
            "WBWBWBWB"
        },
        {
            "WBWBWBWB",
            "BWBWBWBW",
            "WBWBWBWB",
            "BWBWBWBW",
            "WBWBWBWB",
            "BWBWBWBW",
            "WBWBWBWB",
            "BWBWBWBW"
        }
    };
    
    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        cin >> board[i];
    }
    int min = 10000;
    for (int i = 0; i <= n-8; i++) {
        for (int j = 0; j <= m-8; j++) {
            for (int o = 0; o < 2; o++) {
                int t = 0;
                for (int k = 0; k < 8; k++) {
                    for (int l = 0; l < 8; l++) {
                        if(pattern[o][k][l] != board[k+i][l+j]) t++;
                    }
                }
                if (min > t) min = t;
            }
        }
    }
    cout << min;
    return 0;
}