// Online C++ compiler to run C++ program online
#include <iostream>
#include <string>
#include <queue>
using namespace std;

class Node {
public:
    Node* next;
    string name;
};

void listraversal(Node*& head) {
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->name << " ";
        temp = temp->next;
    }
    cout << endl;
}

void insertatend(string name, Node*& head) {
    Node* newNode = new Node();
    newNode->name = name;
    newNode->next = nullptr;
    
    if (head == nullptr) {
        head = newNode;
        return;
    }

    Node* temp = head;
    while (temp->next != nullptr) {
        temp = temp->next;
    }
    temp->next = newNode;
}

void insert(string name, Node*& head) {
    Node* newNode = new Node();
    newNode->name = name;
    newNode->next = nullptr;

    if (head == nullptr) {
        head = newNode;
        return;
    }

    Node* temp = head;
    while (temp->next != nullptr) {
        temp = temp->next;
    }
    temp->next = newNode;
}

void display(queue<string> q) {
    queue<string> c = q; 
    while (!c.empty()) {
        cout << " " << c.front();
        c.pop(); 
    }
    cout << "\n";
}

void enqueue(queue<string>& q, string name) {
    q.push(name);
    cout << name << " inserted into the queue." << endl;
}

void dequeue(queue<string>& q) {
    if (!q.empty()) {
        cout << q.front() << " removed from the queue." << endl;
        q.pop();
    } else {
        cout << "Queue is empty." << endl;
    }
}

int main() {
    Node* head = nullptr;

    insert("Christian", head);
    listraversal(head);
    insert("Hendricks", head);
    listraversal(head);
    insert("Kurt", head);
    listraversal(head);

    queue<string> q;
    enqueue(q, "Christian");
    enqueue(q, "Hendricks");
    enqueue(q, "Kurt");

    display(q);

    dequeue(q);
    display(q);
    
    dequeue(q);
    display(q);

    return 0;
}
