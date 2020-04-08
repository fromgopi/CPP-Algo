#include<iostream>
using namespace std;

class Node {
    public:
        int data;
        Node* next;
};

class LinkedList {
    public: 
        // Constructor.
        LinkedList() {
            head = NULL;
        }
    
        // Destructor
        ~LinkedList();
        
        // Methods.
        void addNode(int val);
        void reverseList();
        void display();
    
    private:
        Node* head;
};


// Implementation Of addNode.
void LinkedList::addNode(int val) {
    Node* newnode = new Node();
    newnode->data = val;
    newnode->next = NULL;
    if (head == NULL) {
        head = newnode;
    }
    else {
        // head is not NULL
        Node* temp = head; 
        while (temp->next != NULL) { 
            // go to end of list
            temp = temp->next; 
        }
        // linking to newnode
        temp->next = newnode; 
    }
}


void LinkedList::display() {
    if (head == NULL) {
        cout << "List is empty!" << endl;
    }
    else {
        Node* temp = head;
        while (temp != NULL) {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }
}


int main(){
    LinkedList* list = new LinkedList();
    cout<<"Adding items into the list";
    list->addNode(10);
    list->addNode(12);
    list->addNode(14);
    list->addNode(20);
    cout<<"Elements in the list are\n";
    list->display();
    return 0;
}