// Online C++ compiler to run C++ program online
#include <iostream>
#include <cstdlib> // for generating random integers
#include <time.h>  // will be used for our seeding function
using namespace std;


struct Node {
    int data;
    Node* next;
};


Node* newNode(int data) {
    Node* node = new Node();
    node->data = data;
    node->next = NULL;
    return node;
}


void appendNode(Node*& head, int data) {
    if (head == NULL) {
        head = newNode(data);
        return;
    }
    
    Node* temp = head;
    while (temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = newNode(data);
}


Node* getMiddle(Node* start, Node* end) {
    if (start == NULL) return NULL;

    Node* slow = start;
    Node* fast = start->next;

    while (fast != end) {
        fast = fast->next;
        if (fast != end) {
            slow = slow->next;
            fast = fast->next;
        }
    }

    return slow;
}


Node* binarySearchLinkedList(Node* head, int target) {
    Node* start = head;
    Node* end = NULL;

    while (start != end) {
        // Find the middle node
        Node* mid = getMiddle(start, end);

        if (mid == NULL) return NULL; 
        
        if (mid->data == target) {
            return mid; 
        } else if (mid->data < target) {
            start = mid->next; 
        } else {
            end = mid; 
        }
    }

    return NULL; 
}


void printList(Node* head) {
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}


void bubbleSort(Node* head) {
    if (head == NULL) return;

    Node* current;
    Node* nextNode = NULL;
    bool swapped;

    do {
        swapped = false;
        current = head;

        while (current->next != nextNode) {
            if (current->data > current->next->data) {
                swap(current->data, current->next->data);
                swapped = true;
            }
            current = current->next;
        }
        nextNode = current;
    } while (swapped);
}

int main() {
    srand(time(0)); 

    Node* head = NULL;

    for (int i = 0; i < 50; i++) {
        appendNode(head, rand() % 100); 
    }

    cout << "The Original Dataset: " << endl;
    printList(head);

    bubbleSort(head);
    cout << "\n The Sorted Dataset: " << endl;
    printList(head);

    int target;
    cout << "\nEnter the number to search for: ";
    cin >> target;


    Node* result = binarySearchLinkedList(head, target);

    if (result != NULL) {
        cout << "The number was found in the linked list!" << endl;
    } else {
        cout << "The number was not found in the linked list!" << endl;
    }

    return 0;
}
