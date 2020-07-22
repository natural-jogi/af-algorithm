#include <iostream>
#include <algorithm>
#include <numeric>
#include <cmath>
using namespace std;
int mean(int *a, int n) {
    return round(accumulate(a, a+n, 0)/(double)n);
}
int mid(int *a, int n) {
    sort(a, a+n);
    return a[n/2];
}
int most(int *a, int n) {
    //wip
}
int range(int *a, int n) {
    return a[n-1]-a[0];
} 
int main() {
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    
    int n;
    cin >> n;
    int *a = new int[n];
    for (int i = 0; i < n; i++) cin >> a[i];
    
    cout << mean(a,n) << '\n' << mid(a,n) << '\n' << most(a,n) << '\n' << range(a,n);
    
    return 0;
}