
#include<iostream>
using namespace std;
int main(){

    int arr[7]={1,2,3,4,5,6,67};

    int *a;
    a=&arr[0];

    for(int j=0;j<7; j++, a++){
        cout<<"Index ["<<j<<"] = "<<*a<<endl;
    }
}
