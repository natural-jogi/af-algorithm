#include <iostream>
#include <string>
using namespace std;
struct Node {
    int value;
    Node *prev;
    Node *next;
};

class Deque {
public:
    Node *head;
    Node *tail;
    int size;
    
    Deque() {
        head = NULL;
        tail = NULL;
        size = 0;
    }
    
    void push_front(int v) {
        Node *n = new Node();
        n->prev = NULL;
        n->next = head;
        n->value = v;
        if(empty()) tail = n;
        else head->prev = n;
        head = n;
        size++;
    }
    
    void push_back(int v) {
        Node *n = new Node();
        n->prev = tail;
        n->next = NULL;
        n->value = v;
        if(empty()) head = n;
        else tail->next = n;
        tail = n;
        size++;
    }
    
    int pop_front() {
        if (empty()) return -1;
        else {
            int v = head->value;
            if (size == 1) {
                delete head, tail;
                head = NULL;
                tail = NULL;
            }
            else {
                Node *t = head;
                head = t->next;
                head->prev = NULL;
                delete t;
            }
            size--;
            return v;
        }
    }
    
    int pop_back() {
        if (empty()) return -1;
        else {
            int v = tail->value;
            if (size == 1) {
                delete head, tail;
                head = NULL;
                tail = NULL;
            }
            else {
                Node *t = tail;
                tail = t->prev;
                tail->next = NULL;
                delete t;
            }
            size--;
            return v;
        }
    }
    
    int front() {
        if (empty()) return -1;
        else return head->value;
    }
    
    int back() {
        if (empty()) return -1;
        else return tail->value;
    }
    
    bool empty() {
        return head == NULL;
    }
};

int main() {
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    int n;
    Deque d;
    cin >> n;
    for (int i = 0; i < n; i++) {
        string c;
        cin >> c;
        if (c == "push_front") {
            int v;
            cin >> v;
            d.push_front(v);
        }
        else if (c == "push_back") {
            int v;
            cin >> v;
            d.push_back(v);
        }
        else if (c == "pop_front") {
            cout << d.pop_front() << '\n';
        }
        else if (c == "pop_back") {
            cout << d.pop_back() << '\n';
        }
        else if (c == "size") {
            cout << d.size << '\n';
        }
        else if (c == "empty") {
            cout << (int)d.empty() << '\n';
        }
        else if (c == "front") {
            cout << d.front() << '\n';
        }
        else if (c == "back") {
            cout << d.back() << '\n';
        }
    }
    return 0;
}