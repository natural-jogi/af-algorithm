#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
typedef struct _Person {
    int age;
    int index;
    string name;
} Person;

bool compare(Person a, Person b) {
    if (a.age == b.age) return a.index < b.index;
    else return a.age < b.age;
}

int main() {
    int n;
    Person people[100000];
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> people[i].age >> people[i].name;
        people[i].index = i;
    }
    sort(people, people+n, compare);
    for (int i = 0; i < n; i++) cout << people[i].age << " " << people[i].name << "\n";
    return 0;
}