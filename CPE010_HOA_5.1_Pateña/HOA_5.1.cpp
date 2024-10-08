#include <iostream>
#include <string>
#include <queue>
using namespace std;


void display(queue<string> q) {
    queue<string> c = q; 
    while (!c.empty()) {
        cout << " " << c.front();
        c.pop(); 
    }
    cout << "\n";
}

int main() {
    string class_list[5] = {"Dale", "Christian", "John", "Kurt", "Megan"}; 
    queue<string> class_q;

    
    int class_size = sizeof(class_list) / sizeof(class_list[0]);

    for (int i = 0; i < class_size; i++) {
        class_q.push(class_list[i]);
    }

    display(class_q); 
    return 0;
}