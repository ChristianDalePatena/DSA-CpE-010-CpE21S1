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


int countOccurrencesLinkedList(Node* head, int key) {
    int count = 0;
    Node* current = head;
    while (current != nullptr) {
        if (current->data == key) {
            count++;
        }
        current = current->next;
    }
    return count;
}

int main() {
    
    int arr[] = {15, 18, 2, 19, 18, 0, 8, 14, 19, 14};
    Node* head = createNode(arr[0]); 
    Node* current = head;

  
    for (int i = 1; i < sizeof(arr) / sizeof(arr[0]); i++) {
        current->next = createNode(arr[i]);
        current = current->next;
    }

   
    int key = 18;
    int occurrences = countOccurrencesLinkedList(head, key);
    cout << "The occurrences of " << key << " in the linked list is : " << occurrences << endl;

   
    current = head;
    Node* temp;
    while (current != nullptr) {
        temp = current;
        current = current->next;
        delete temp; 
    }

    return 0;
}

