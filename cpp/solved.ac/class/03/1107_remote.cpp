/*
    1107번: 리모컨
    
    고장나지 않은 버튼들로 만들 수 있는 수 중
    원하는 채널에 가장 가까운 수 2개(작은 쪽, 큰 쪽)를 찾은 뒤
    +, -만 눌렀을 때, 작은 쪽에서 +로 갈 때, 큰 쪽에서 -로 갈 때
    3가지 중 최솟값을 출력
*/
#include <iostream>
#include <cmath>    // abs(절댓값) 이용
using namespace std;

bool b[10] = {false, };

// 자릿수를 돌면서 고장난 버튼인지 확인
bool isBroken(int v) {
    if (v == 0) return b[0];    // 0번을 누를 수도 있음
    while (v) {
        if (b[v%10]) return true;
        v /= 10;
    }
    return false;
}

// 자릿수 반환(버튼 누르는 횟수)
int digit(int v) {
    if (v == 0) return 1;       // 0번을 누를 수도 있음
    int c = 0;
    while (v) {
        v /= 10;
        c++;
    }
    return c;
}

int main() {
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    
    int n, m;
    cin >> n >> m;
    
    for (int i = 0; i < m; i++) {
        int t;
        cin >> t;
        if (!b[t]) b[t] = true;            // 고장난 버튼 체크
    }
    
    int low = n+1, high = n-1;
    bool lDone = false, hDone = false;     // 주어진 버튼으로 작은 쪽, 큰 쪽을 만들 수 있나?
    
    while (!lDone && low > 0) if (!isBroken(--low)) lDone = true;
    while (!hDone && high < 1000000) if (!isBroken(++high)) hDone = true;    // 아무리 크게 가도 백만보다는 작음, 그 뒤로는 +,-로만 가는 게 100% 작음
    
    int best = abs(n-100);                 // +,-로 갈 때
    low = digit(low) + abs(n-low);         // 작은 쪽에서 +
    high = digit(high) + abs(n-high);      // 큰 쪽에서 -
    if (lDone && best > low) best = low;
    if (hDone && best > high) best = high;
    
    cout << best;
    
    return 0;
}