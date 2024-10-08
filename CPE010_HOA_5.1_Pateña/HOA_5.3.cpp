
#include <iostream>
#include <string>
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

// Queue using Array Implementation
class Queue {
    int front, rear, size;
    int capacity;
    string* array;

public:
    Queue(int cap) {
        capacity = cap;
        front = size = 0;
        rear = capacity - 1;
        array = new string[capacity];
    }

    bool isFull() {
        return size == capacity;
    }

    bool isEmpty() {
        return size == 0;
    }

    void enqueue(string item) {
        if (isFull()) {
            cout << "Queue is full, cannot insert " << item << endl;
            return;
        }
        rear = (rear + 1) % capacity;
        array[rear] = item;
        size++;
        cout << item << " inserted into the queue." << endl;
    }

    void dequeue() {
        if (isEmpty()) {
            cout << "Queue is empty, cannot dequeue." << endl;
            return;
        }
        cout << array[front] << " removed from the queue." << endl;
        front = (front + 1) % capacity;
        size--;
    }

    void display() {
        if (isEmpty()) {
            cout << "Queue is empty." << endl;
            return;
        }
        cout << "Queue: ";
        for (int i = 0; i < size; i++) {
            int idx = (front + i) % capacity;
            cout << array[idx] << " ";
        }
        cout << endl;
    }
};

int main() {
    Node* head = nullptr;

    insert("Christian", head);
    listraversal(head);
    insert("Hendricks", head);
    listraversal(head);
    insert("Kurt", head);
    listraversal(head);

    Queue q(3);  // Queue with capacity of 3
    q.enqueue("Christian");
    q.enqueue("Hendricks");
    q.enqueue("Kurt");

    q.display();

    q.dequeue();
    q.display();

    q.dequeue();
    q.display();

    return 0;
}
