#include<iostream>
using namespace std;

class Node{

    public:
    int data;
    Node* prev;
    Node* next;


    //constructor
    Node(int data){

        this -> data = data;
        this -> prev = NULL;
        this -> next = NULL;
    }

    ~Node() {
        int val = this -> data;
        if(next != NULL) {
            delete next;
            next = NULL;
        }
        cout << "memory free for node with data "<< val << endl;
    }

};


void insertAtHead(Node* &head, Node* &tail, int d){

    if(head == NULL){
        Node* temp = new Node(d);
        head = temp;
        tail = temp;
    }
    else{
        Node* temp = new Node(d);
        temp -> next = head;
        head -> prev = temp;
        head = temp;

    }


}

void insertAtTail(Node* &head, Node* &tail, int d){

    if(tail == NULL){
        Node* temp = new Node(d);
        head = temp;
        tail = temp;
    }
    else{
        Node* temp = new Node(d);
        tail -> next = temp;
        temp -> prev = tail -> next;
        tail = temp;

    }

}

void insertAtPosition(Node* &head, Node* &tail, int pos, int d){

    //at head
    if(pos == 1){
        insertAtHead(head, tail, d);
        return;
    }

    Node* temp = head;
    int cnt = 1;
    while(cnt < pos-1){

        temp = temp -> next;
        cnt++;
    }

    //last pos
    if(temp -> next == NULL){
        insertAtTail(head, tail, d);
        return;
    }

    Node* newNode = new Node(d);
    newNode ->next = temp -> next;
    temp -> next -> prev = newNode;

    temp -> next = newNode;
    newNode -> prev = temp;
}

void deleteNode(Node* & head, int position) { 

    //deleting first or start node
    if(position == 1) {
        Node* temp = head;
        temp -> next -> prev = NULL;
        head = temp ->next;
        temp -> next = NULL;
        delete temp;
    }
    else
    {
        //deleting any middle node or last node
        Node* curr = head;
        Node* prev = NULL;

        int cnt = 1;
        while(cnt < position) {
            prev = curr;
            curr = curr -> next;
            cnt++;
        }

        curr -> prev = NULL;
        prev -> next = curr -> next;
        curr -> next = NULL;

        delete curr;

    }
}


void print(Node* &head){

    Node* temp = head;
    while(temp != NULL){

        cout << temp -> data << " "; 
        temp = temp -> next;

    }
    cout << endl;
}

//len of linked list
int lenLL(Node* &head){

    Node* temp = head;
    int len = 0;
    while(temp != NULL){

        len++;
        temp = temp -> next;

    }
    return len;
}


int main(){

    Node* node1 = new Node(19);
    Node* head = NULL;
    Node* tail = NULL;
    print(head);
    //len
    // cout << lenLL(head);


    //Insertion
        // At Head
    // insertAtHead(head, 11);
    // print(head);
    // insertAtHead(head, 12);
    // print(head);
    // insertAtHead(head, 20);
    // print(head);

        // At Tail
    insertAtTail(head, tail, 20);
    print(head);
    insertAtTail(head, tail, 45);
    print(head);
    insertAtTail(head, tail, 55);
    print(head);

        //At Pos
    insertAtPosition(head, tail, 3, 66);
    print(head);


    deleteNode(head, 3);
    print(head);

}


