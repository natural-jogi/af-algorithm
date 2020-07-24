#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

class Set {
public:
    vector<int> a;
    
    void add(int x) {
        if (!check(x)) a.push_back(x);
    }
    
    void remove(int x) {
        int i = search(x);
        if (i >= 0) a.erase(a.begin()+i);
    }
    
    void toggle(int x) {
        int i = search(x);
        if (i >= 0) a.erase(a.begin()+i);
        else a.push_back(x);
    }
    
    int check(int x) {
        if (search(x) < 0) return 0;
        return 1;
    }
    
    void all() {
        empty();
        for (int i = 1; i <= 20; i++) a.push_back(i);
    }
    
    void empty() {
        a.clear();
    }
    
    int search(int x) {
        sort(a.begin(), a.end());
        int b = 0, e = a.size();
        while (b < e) {
            int m = (b + e) / 2;
            if (a[m] > x) e = m;
            else if (a[m] < x) b = m+1;
            else return m;
        }
        return -1;
    }
};

int main() {
    cin.tie(NULL);cout.tie(NULL);
    ios::sync_with_stdio(false);
    
    int m;
    Set s;
    cin >> m;
    for (int i = 0; i < m; i++) {
        int x;
        string in;
        cin >> in;
        if (in == "add") {
            cin >> x;
            s.add(x);
        }
        else if (in == "remove") {
            cin >> x;
            s.remove(x);
        }
        else if (in == "check") {
            cin >> x;
            cout << s.check(x) << '\n';
        }
        else if (in == "toggle") {
            cin >> x;
            s.toggle(x);
        }
        else if (in == "all") {
            s.all();
        }
        else if (in == "empty") {
            s.empty();
        }
    }
    
    return 0;
}