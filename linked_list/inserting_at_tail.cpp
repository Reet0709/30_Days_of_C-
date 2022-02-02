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
    display(head);

    return 0;
}
