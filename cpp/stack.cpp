#include <iostream>
using namespace std;
template<typename T> class Stack {
public:
    int top;
    int size;
    T *values;
    
    Stack(int size) {
        this->size = size;
        values = new T[size];
        top = 0;
    }
    
    void push(T v) {
        if (this->full()) {
            cout << "Stack is full!!\n";
        }
        else {
            values[top++] = v;
        }
    }
    
    T pop() {
        if (this->empty()) {
            cout << "Stack is empty!!\n";
            return NULL;
        }
        else {
            return values[--top];
        }
    }
    
    T Top() {
        if (this->empty()) {
            cout << "Stack is empty!!\n";
            return NULL;
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

template<typename T> ostream& operator << (ostream &out, Stack<T> &stack) {
    T *temp = stack.values;
    out << "===\n";
    for (int i = stack.top; i > 0; i--) out << temp[i-1] << '\n';
    out << "===\n";
}

int main() {
    Stack<int> stack(10);
    stack.push(1);
    stack.push(3);
    stack.push(2);
    stack.push(4);
    cout << stack;
    stack.pop();
    stack.pop();
    cout << stack;
    cout << "TOP: " << stack.Top() << '\n';
    stack.pop();
    stack.pop();
    stack.pop();
    cout << stack;
    return 0;
}