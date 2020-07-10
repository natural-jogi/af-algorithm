#include <iostream>
using namespace std;
class Stack {
public:
    int top;
    int size;
    int *values;
    
    Stack() {
        size = 10000;
        values = new int[size];
        top = 0;
    }
    
    void push(int v) {
        values[top++] = v;
    }
    
    int pop() {
        if (empty()) {
            return -1;
        }
        else {
            return values[--top];
        }
    }
    
    int Top() {
        if (empty()) {
            return -1;
        }
        else {
            return values[top-1];
        }
    }
    
    bool full() {
        return top == size;
    }
    
    bool empty() {
        return top == 0;
    }
    
    ~Stack() {
        delete[] values;
    }
};

int main() {
    int n;
    Stack s;
    cin >> n;
    for (int i = 0; i < n; i++) {
        string c;
        cin >> c;
        if (c == "push") {
            int v;
            cin >> v;
            s.push(v);
        }
        else if (c == "pop") {
            cout << s.pop() << '\n';
        }
        else if (c == "size") {
            cout << s.top << '\n';
        }
        else if (c == "empty") {
            cout << (int)s.empty() << '\n';
        }
        else if (c == "top") {
            cout << s.Top() << '\n';
        }
    }
    return 0;
}