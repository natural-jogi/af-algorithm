#include <iostream>
#include <algorithm>
using namespace std;
typedef struct _Point {
    int x;
    int y;
} Point;

bool c(Point a, Point b) {
    if (a.x == b.x) return a.y < b.y;
    else return a.x < b.x;
}

int main() {
    int n;
    Point p[100000];
    cin >> n;
    for (int i = 0; i < n; i++) cin >> p[i].x >> p[i].y;
    sort(p, p+n, c);
    for (int i = 0; i < n; i++) cout << p[i].x << " " << p[i].y << "\n";
    return 0;
}