#include<iostream>
using namespace std;
int main(){

int arr[]={1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

int last_num;
cout<<"Enter number for end of the array : ";
cin>>last_num;

int index_4;
cout<<"Enter number index number 4 : ";
cin>>index_4;

int first_num;
cout<<"Enter number for beginning of the array : ";
cin>>first_num;

//cout<<"300 ";
cout<<first_num<<" ";

for(int i=0; i<4; i++){
    cout<<arr[i]<<" ";
}
//cout<<"200 ";
cout<<index_4<<" ";
for(int i=4; i<10; i++){
    cout<<arr[i]<<" ";

}
//cout<<"100 ";
cout<<last_num<<" ";
}
