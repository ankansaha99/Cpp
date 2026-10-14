#include<iostream>
using namespace std;



class node{
public:
    int data;
    node* next;

    node(int val){
    data=val;
    next=NULL;
    }
};
void insert_first(node* & head, int val){
    node* n = new node(val) ;
        n->next=head;
        head=n;



}

void insert_last(node* &head,int val){



    node* n = new node(val);

    if (head==NULL){
        head=n;
        return;
    }

    node* temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=n;

}
void display(node* head){
    node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;

}

int main(){


    node* head =NULL;
    insert_last(head,1);
    insert_last(head,2);
    insert_last(head,3);

    display(head);

    insert_first(head,97);
    display(head);




return 0;
}
