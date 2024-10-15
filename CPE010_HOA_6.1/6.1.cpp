#include <iostream>
using namespace std;

template <typename T>
class Node {
    public:
    T data;
    Node* next;
};

template <typename T>
Node<T>* new_node(T value) {
    Node<T>* newNode = new Node<T>();
    newNode->data = value;
    newNode->next = nullptr;
    return newNode;
}

template <typename T>
void linearSearch(Node<T>* head, T dataFind) {
    Node<T>* current = head;
    int position = 1;
    
    
    while (current != nullptr) {
        if (current->data == dataFind) {
            cout << "Element '" << dataFind << "' can be found at the position " << position << endl;
            return;
        }
        current = current->next;
        position++;
    }
    cout << "Element '" << dataFind << "'  was not found in the link list." << endl;
}

int main() {
  
    Node<char>* name1 = new_node('C');
    Node<char>* name2 = new_node('h');
    Node<char>* name3 = new_node('r');
    Node<char>* name4 = new_node('i');
    Node<char>* name5 = new_node('s');
    Node<char>* name6 = new_node('t');
    Node<char>* name7 = new_node('i');
    Node<char>* name8 = new_node('a');
    Node<char>* name9 = new_node('n');

  
    name1->next = name2;
    name2->next = name3;
    name3->next = name4;
    name4->next = name5;
    name5->next = name6;
    name6->next = name7;
    name7->next = name8;
    name8->next = name9;
    name9->next= nullptr;
    
    char target;
    cout<<"Enter a letter to ensure if it exist within the linked list: ";
    cin>>target;
    
   
    linearSearch(name1, 'h');

    return 0;
}
