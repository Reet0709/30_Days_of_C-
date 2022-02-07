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
int length(node* &head){
    int l = 0;
    node*temp = head;
    while(temp!=NULL){
        l++;
        temp= temp->next;
    }
    return l;
}

node* kappend(node* &head, int k){
    node* newhead;
    node* newtail;
    node* tail = head;
    
    int l = length(head);
    int count = 1;
    while(tail->next!=NULL){
        if (count==l-k){
            newtail = tail;
        }
        if (count==l-k+1){
            newhead = tail;
        }
        tail= tail->next;
        count++;
    }
    
    newtail->next= NULL;
    newhead->previous = NULL;
    tail->next = head;
    
    return newhead;
}
void display(node* &head){
    node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp= temp->next;
    }
    cout<<"NULL"<<endl;
}

int main()
{
    node* head = NULL;
    insertAtTail(head,1);
    insertAtTail(head,2);
    insertAtTail(head,3);
    insertAtTail(head,4);
    insertAtTail(head,5);
    insertAtTail(head,6);
    display(head);
    
    node* newhead = kappend(head,3);
    display(newhead);
    

    return 0;
}
