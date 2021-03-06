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


node* reverse(node* head){
 if(head==NULL || head->next == NULL){
     return head;
 }
 node* newhead = reverse(head->next);
     head->next->next = head;
     head->next = NULL;
     return newhead;

}

void display(node* head){
    node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<"->";
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
    node* newhead = reverse(head);
    display(newhead);
    return 0;
}
