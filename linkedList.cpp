#include<iostream>
using namespace std;

class Node{
    public:

    int data;
    Node *next;

    //contrsuctor
    Node(int d){
        this->data = d;
        this->next = NULL;
    }

    void insertAtTail(Node* &head,Node* &tail,int d){
        if(tail == NULL){  //create new node
            Node* temp = new Node(d);
            head = temp;
            tail = temp;
        } else{ //atleast one element present (head)
            Node* temp = new Node(d);
            tail->next = temp;
            tail = temp;
        }
    }

    void print(Node* head){
        Node* temp = head;
        while(temp != NULL){
            cout<<temp->data<<" ";
            temp = temp->next;
        }
    }
    
    };






int main(){
    Node* LL;
    Node* head = NULL;
    Node* tail = NULL;

    LL->insertAtTail(head,tail,20);
    LL->insertAtTail(head,tail,30);
    LL->insertAtTail(head,tail,40);
    LL->insertAtTail(head,tail,50);

    LL->print(head);

    



    return 0;
}