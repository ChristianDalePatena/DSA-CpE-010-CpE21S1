
#include <iostream>
using namespace std;

class Node {
public:
    int value;
    Node* next;
};

int main() {
    Node* head;
    Node* one = NULL;
    Node* two = NULL;
    Node* three = NULL;

    // Allocate memory
    one = new Node();
    two = new Node();
    three = new Node();

    // Assign values
    one->value = 1;
    two->value = 2;
    three->value = 3;

    // Connect nodes
    one->next = two;
    two->next = three;
    three->next = NULL;

    // Set head to the first node
    head = one;

    // Print the linked list
    while (head != NULL) {
        cout << head->value << endl;
        head = head->next;
    }

    return 0;
}
