#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

struct Dict {
    int index;
    string name;
};

bool cmp(Dict a, Dict b) {
    return a.name < b.name;
}

int bs(Dict *a, int b, int e, string v) {
    while (b <= e) {
        int m = (b + e) / 2;
        if (a[m].name > v) e = m-1;
        else if (a[m].name < v) b = m+1;
        else return a[m].index;
    }
    return -1;
}

int main() {
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    
    int n, m;
    cin >> n >> m;
    Dict *di = new Dict[n];
    Dict *dn = new Dict[n];
    for (int i = 0; i < n; i++) {
        di[i].index = i+1;
        cin >> di[i].name;
    }
    
    copy(di, di+n, dn);
    sort(dn, dn+n, cmp);
    
    for (int i = 0; i < m; i++) {
        string t;
        cin >> t;
        int temp = atoi(t.c_str());
        if (temp) cout << di[temp-1].name << '\n';
        else cout << bs(dn, 0, n-1, t) << '\n';
    }
    return 0;
}