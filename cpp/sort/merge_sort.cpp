#include <iostream>
using namespace std;
int num[1000000];
int *arr;
void m(int a, int b) {
    int mid = (a + b) / 2;
    int i = a;
    int j = mid + 1;
    int k = a;
    while (i <= mid && j <= b) {
        if (num[i] > num[j]) arr[k++] = num[j++];
        else arr[k++] = num[i++];
    }
    if (i > mid) while (j <= b) arr[k++] = num[j++];
    else while (i <= mid) arr[k++] = num[i++];
    for(int i = a; i <= b; i++) num[i] = arr[i];
}
void p(int a, int b) {
    if (a < b) {
        int mid = (a + b) / 2;
        p(a,mid);
        p(mid+1,b);
        m(a,b);
    }
}
int main() {
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    int n;
    cin >> n;
    arr = new int[n];
    for (int i = 0; i < n; i++) cin >> num[i];
    p(0, n-1);
    for (int i = 0; i < n; i++) cout << num[i] << '\n';
    return 0;
}