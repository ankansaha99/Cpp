
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

bool searching(node* head, int key){

    node* temp=head;
    while(temp!=NULL){

        if (temp->data==key){

            return true;

        }
        temp=temp->next;
    }return false;

}


int main(){


    node* head =NULL;
    insert_last(head,1);
    insert_last(head,2);
    insert_last(head,3);

    display(head);

    insert_first(head,7);
    display(head);

    int src;
    cout<<"Enter Number for search : ";
    cin>>src;
    //cout<<searching(head,src)<<endl;

    if(searching(head,src)==1){
        cout<<"Founded"<<endl;
    }else{
    cout<<"Not Found!!"<<endl;
    }


return 0;
}
