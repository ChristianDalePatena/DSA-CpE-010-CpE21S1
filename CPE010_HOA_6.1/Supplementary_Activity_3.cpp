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


int binarySearch(int arr[], int low, int high, int x) {
    while (low <= high) {
        int mid = low + (high - low) / 2; 
        if (arr[mid] == x)
            return mid; 
        if (arr[mid] < x)
            low = mid + 1; 
        else
            high = mid - 1; 
    }
    return -1; 
}

// Function to display the linked list
void displayList(Node* head) {
    Node* current = head;
    while (current != nullptr) {
        cout << current->data << " -> ";
        current = current->next;
    }
    cout << "nullptr" << endl; 
}

// Function to count occurrences of a key in the linked list
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
    // Array for binary search
    int arr[] = {3, 5, 6, 8, 11, 12, 14, 15, 17, 18};
    int n = sizeof(arr) / sizeof(arr[0]);
    int key = 8;

    // Perform binary search
    int result = binarySearch(arr, 0, n - 1, key);
    if (result != -1)
        cout << "The number " << key << " was found at position " << result << endl;
    else
        cout << "The number " << key << " does not exist in the array." << endl;

    // Create linked list from the array
    Node* head = createNode(arr[0]); 
    Node* current = head;

    for (int i = 1; i < n; i++) {
        current->next = createNode(arr[i]);
        current = current->next;
    }

    
    cout << "Linked List: ";
    displayList(head);

   
    key = 8; 
    int occurrences = countOccurrencesLinkedList(head, key);
    cout << "The occurrences of " << key << " in the linked list is " << occurrences << endl;

   
    current = head;
    Node* temp;
    while (current != nullptr) {
        temp = current;
        current = current->next;
        delete temp; 
    }

    return 0;
}


