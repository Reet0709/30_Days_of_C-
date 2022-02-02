#include <iostream>

using namespace std;

class node{
    public:
        int data;
        node* next;
        node(int value){
            data= value;
            next = NULL;
        }
};

void insertAtTail(node* &head,int value){
    node* n = new node(value);
    if(head==NULL){
        head=n;
        return;
    }
    
    node* temp = head;
    while(temp->next!=NULL){
        temp= temp->next;
    }
    temp->next = n;
}

 void insertAtHead(node* &head, int value){
    node* n = new node(value);
    n->next = head;
    head = n;
}

void deletion(node* &head,int value){
    if (head == NULL){
        return;
    }

    node* temp = head;
    while(temp->next->data !=value){
        temp = temp->next;
    }
    
    node* todelete = temp->next;
    temp->next = temp->next->next;
    delete todelete;
}

void deleteAtHead(node* &head){
    node* todelete = head;
    head=head->next;
    delete todelete;
}

void deleteAtTail(node* &head){
    node* temp = head;
    while(temp->next->next!= NULL){
        temp=temp->next;
    }
    delete(temp->next);
    temp->next = NULL;
    
}

void display(node* head){
    node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<endl;
        temp = temp->next;
    }
    cout<<"null"<<endl;
}

int main()
{
    node* head = 0;
    insertAtTail(head,1);
    insertAtTail(head,2);
    insertAtTail(head,3);
    insertAtTail(head,4);
    insertAtTail(head,5);
    display(head);
    deletion(head,3);
    deleteAtHead(head);
    deleteAtTail(head);
    display(head);
    return 0;
}
