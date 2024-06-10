#include<iostream>
using namespace std;

class Node{

    public:
    int data;
    Node *next;

    //constructor
    Node(int data){
        this -> data = data;
        this -> next = NULL;
    }

    //destructor
    ~Node(){
        int val = this -> data;
        if(this -> next != NULL){
            this -> next = NULL;
            delete next;
        }

        cout << "Memory is free for " << val << endl;
    }

};

void insertAtHead(Node* &head, int d){

    //new node
    Node *temp = new Node(d);
    temp -> next = head;
    head = temp;
}

void insertAtTail(Node* &tail, int d){

    //new node
    Node *temp = new Node(d);
    tail -> next = temp;
    tail = temp;
}

void insertAtPosition(Node* &tail, Node* &head, int pos, int d){

    if(pos == 1){
        insertAtHead(head, d);
        return ;
    }

    Node *temp = head;
    int cnt = 1;
    while(cnt < pos-1){
        temp = temp -> next;
        cnt++;
    }

    if(temp -> next == NULL){
        insertAtTail(tail, d);
        return;
    }

    Node *newNode = new Node(d);
    newNode -> next = temp -> next;
    temp -> next = newNode;

}

void deleteNode(Node* &head, int pos){

    if(pos == 1){
        Node* temp = head;
        head = head -> next;
        
        temp -> next = NULL;    //deleted node
        delete temp;
    }
    else{
        Node*curr = head;
        Node* prev = NULL; 
        int cnt = 1;

        while(cnt < pos){
            prev = curr;
            curr = curr -> next;
            cnt++;
        }

        prev -> next = curr -> next;

        curr -> next = NULL;    //deleted node
        delete curr;
    }
}


void print(Node* &head){

    Node *temp = head;
    while(temp != NULL){
        cout << temp -> data << " ";
        // cout << temp;
        temp = temp -> next;
    }
    cout << endl;
}


int main(){

    //created a new node
    Node* node1 = new Node(10);
    // cout << node1 -> data << endl;
    // cout << node1 -> next << endl;

    //head pointed to node1
    Node *head = node1;
    Node *tail = node1;
    

    // Insert at Head
    // print(head);
    // insertAtHead(head, 12);
    // print(head);
    // insertAtHead(head, 15);
    // print(head);


    // Insert At Tail
    print(head);
    insertAtTail(tail, 12);
    print(head);
    insertAtTail(tail, 15);
    print(head);

    
    // Insert at pos
    insertAtPosition(tail, head, 4, 18);
    print(head);

    
    //deletion
    deleteNode(head, 3);
    print(head);

    cout << endl << head -> data<< " " << tail -> data ;



}