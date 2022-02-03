/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
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

void makeCycle(node* &head, int pos){
    node* temp= head;
    node* startpoint;
    
    int count = 1;
    while(temp->next!=NULL){
        if(count==pos){
            startpoint = temp;
        }
        temp = temp->next;
        count++;
    }
    
    temp->next = startpoint;
}

bool detectCycle(node* &head){
    node* slowptr= head;
    node* fastptr = head;
    while(fastptr!= NULL && fastptr->next!=NULL){
        slowptr= slowptr->next;
        fastptr = fastptr->next->next;
        if (slowptr==fastptr){
            return true;
        }
    }
    return false;
}

void removeCycle(node* &head){
    node* slow = head;
    node* fast = head;
    
    do{
        slow= slow->next;
        fast = fast->next->next;
    }while(slow!= fast);
    
    fast = head;
    while(slow->next!=fast->next){
        slow=slow->next;
        fast = fast->next;
    }
    slow->next=NULL;
    
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
    int k = 2;
    makeCycle(head, 3);
    //display(head);
    cout<<detectCycle(head)<<endl;
    removeCycle(head);
    cout<<detectCycle(head);
    return 0;
}
