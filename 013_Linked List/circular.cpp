#include<iostream>
using namespace std;


class Node{

    public:
    int data;
    Node* next;

    Node(int data){

        this -> data = data;
        this -> next = NULL;
    }

    ~Node(){

        int val = this -> data;
        if(this -> next != NULL){
            delete next;
            next = NULL;
        }

        cout << "memory free for node with data "<< val << endl;
    }
};


void insertNode(Node* &tail, int element, int d){

    
    if(tail == NULL){
        Node* temp = new Node(d);
        tail = temp;
        temp -> next = temp;
    }
    else{
        // assume ele is present in list
        Node* curr = tail;
        while(curr -> data != element){
            curr = curr -> next;
        }

        Node* temp = new Node(d);
        temp -> next = curr -> next;
        curr -> next = temp;

    }

}

void deleteNode(Node* &tail, int val){

    // empty list
    if(tail == NULL){
        cout << "list is empty";
        return;
    }
    else{

        Node* prev = tail;
        Node* curr = prev -> next;

        while(curr -> data != val){
            prev = curr;
            curr = curr -> next;
        }

        prev -> next = curr -> next;

        if(prev == curr){
            tail = NULL;
        }
        else if(tail == curr){

            tail = prev;
        }



        curr -> next = NULL;
        delete curr;

    }
}

void print(Node* tail){

    Node* temp = tail;

    if(tail == NULL){
        cout << "List is Empty" << endl;
        return;
    }

    do{
        cout << tail -> data << " ";
        tail = tail -> next;

    }while(tail != temp);
    cout << endl;
        
}


int main(){

    Node* tail = NULL;

    insertNode(tail, 5, 3);
    print(tail);
    insertNode(tail, 3, 6);
    print(tail);
    insertNode(tail, 6, 9);
    print(tail);
    insertNode(tail, 6, 10);
    print(tail);

    deleteNode(tail, 9);
    print(tail);


}