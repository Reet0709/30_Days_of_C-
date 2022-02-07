 "#include <iostream>

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

void deleteAtHead(node* &head){
    node* todelete = head;
    head = head->next;
    head->previous = NULL;
    delete todelete;
  
}
void deletion(node* &head, int pos){
    
    if(pos==1){
        deleteAtHead(head);
    }
    node* temp = head;
    int count = 1;
    while(temp!=NULL && count!=pos){
        temp= temp->next;
        count++;
    }
    
    temp->previous->next = temp->next;
    if(temp->next!=NULL){
         temp->next->previous= temp->previous;
    }
    
    delete temp;
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
    insertAtTail(head,4);
    insertAtHead(head,5);
    display(head);
    deletion(head,3);
    display(head);
    deleteAtHead(head);
    display(head);

    return 0;
}
