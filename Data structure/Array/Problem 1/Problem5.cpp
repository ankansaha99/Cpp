#include<iostream>
using namespace std;
int main()
{
    int arr[]={1,2,3,4,5,6,7,8,9,10};
    int value=1;
    for(int i=0;i<7;i++){
        if(arr[i]==4){
            value++;

        }
        arr[i]=arr[i+value];
    }
    for (int i=0;i<7;i++){
        cout<<arr[i]<<" ";
    }

}
