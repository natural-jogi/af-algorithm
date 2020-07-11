#include <iostream>
#include <string>
using namespace std;
class Queue {
public:
    int maxSize;
    int front;
    int rear;
    int *values;
    
    Queue() {
        maxSize = 10000;
        front = 0;
        rear = 0;
        values = new int[maxSize];
    }
    
    void push(int v) {
        values[rear++] = v;
    }
    
    int pop() {
        if (empty()) return -1;
        else return values[front++];
    }
    
    bool empty() {
        return front == rear;
    }
    
    int size() {
        return rear - front;
    }
    
    int Front() {
        if (empty()) return -1;
        else return values[front];
    }
    
    int Back() {
        if (empty()) return -1;
        else return values[rear-1];
    }
};

int main() {
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    int n;
    Queue q;
    cin >> n;
    for (int i = 0; i < n; i++) {
        string c;
        cin >> c;
        if (c == "push") {
            int v;
            cin >> v;
            q.push(v);
        }
        else if (c == "pop") {
            cout << q.pop() << '\n';
        }
        else if (c == "size") {
            cout << q.size() << '\n';
        }
        else if (c == "empty") {
            cout << (int)q.empty() << '\n';
        }
        else if (c == "front") {
            cout << q.Front() << '\n';
        }
        else if (c == "back") {
            cout << q.Back() << '\n';
        }
    }
    return 0;
}