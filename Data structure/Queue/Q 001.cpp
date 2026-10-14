#include<iostream>
using namespace std;
#define n 20

class queqe{

int * arr;
int front;
int back;

public :
    queqe(){
        arr=new int[n];
        front =-1;
        back=-1;
    }


    void enq (int x){
    if(back==n-1){
        cout<<"Queqe is Full";
        return;
    }
    back++;
    arr[back]=x;


    if(front==-1){
    front++;
    }
    }

    void dq(){
        if(front==-1 || front >back ){
            cout<<"Queqe is Empty";
            return;
        }
        front++;

    }

    int show(){
    if(front==-1 || front >back){
         cout<<"Queqe is Empty";
            return -1;

    }
    return arr[front] ;

    }

bool empty(){

    if(front==-1 || front >back){

            return true;

}

}





};
int main(){

queqe q;
q.enq(1);
q.enq(2);
q.enq(3);
q.enq(4);

cout<<q.show()<<endl;

q.dq();
cout<<q.show()<<endl;
q.dq();

q.dq();

cout<<q.show()<<endl;


/*if(q.empty()==1){
    cout<<"Is not Empty";
}else{

cout<<"  empty";
}
*/

}

