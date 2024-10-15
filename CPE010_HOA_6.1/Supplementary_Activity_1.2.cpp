#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

Node* createNode(int data) {
    Node* newNode = new Node();
    newNode->data = data;
    newNode->next = nullptr;
    return newNode;
}

int sequentialSearchLinkedList(Node* head, int key) {
    int comparisons = 0;
    Node* current = head;
    while (current != nullptr) {
        comparisons++;
        if (current->data == key) {
            return comparisons;  
        }
        current = current->next;
    }
    return comparisons; 
}

int main() {
   
    int arr[] = {15, 18, 2, 19, 18, 0, 8, 14, 19, 14};
    Node* head = createNode(arr[0]);
    Node* current = head;
    for (int i = 1; i < 10; i++) {
        current->next = createNode(arr[i]);
        current = current->next;
    }

    int key = 18;
    int comparisons = sequentialSearchLinkedList(head, key);
    cout << "The Comparisons in linked lis: " << comparisons << endl;

    return 0;
}

