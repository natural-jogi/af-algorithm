//WIP
#include <iostream>
#include <vector>
using namespace std;
void s(vector<int>::iterator a, vector<int>::iterator b) {
    if (a < b) {
        int p = *a;
        vector<int>::iterator A = a, B = b, P;
        vector<int> v1, v2;
        for (auto i = a; i != b; i++) {
            if (*i < p) v1.push_back(*i);
            else if (*i > p) v2.push_back(*i);
        }
        for (auto i = v1.begin(); i != v1.end(); i++) *(a++) = *i;
        P = a;
        *(a++) = p;
        for (auto i = v2.begin(); i != v2.end(); i++) *(a++) = *i;
        s(A, P);
        s(P+1, B);
    }
}
int main() {
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    int n;
    vector<int> num;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int temp;
        cin >> temp;
        num.push_back(temp);
    }
    s(num.begin(), num.end());
    for (auto i = num.begin(); i != num.end(); i++) cout << *i << '\n';
    return 0;
}