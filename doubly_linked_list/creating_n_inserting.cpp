#include <iostream>

using namespace std;

class node {
    public:
    int data;
    node* next;
    node* previous;
    
    node(int val){
        data = val;
        next = NULL;
        previous = NULL;
    }
};

void insertAtHead(node* &head, int value){
    node* n = new node(value);
    n->next = head;
    if (head!=NULL){
        head->previous = n;
    }
    head = n;
}

void insertAtTail(node* &head, int value){
    
    if(head ==NULL){
        insertAtHead(head,value);
        return;
    }
    node* n = new node(value);
    node* temp = head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next = n;
    n->previous = temp;
    n->next = NULL;
}


void display(node* &head){
    node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp= temp->next;
    }
    cout<<endl;
}

int main()
{
    node* head = NULL;
    insertAtTail(head,1);
    insertAtTail(head,2);
    insertAtTail(head,3);
    insertAtHead(head,5);
    display(head);

    return 0;
}
