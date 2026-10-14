#include<iostream>
using namespace std;
int main()
{
    int arr[3][4]={1,6,7,9,2,4,8,5,3,1,9,4};
    cout<<"Matrix :"<<endl;
    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    cout<<"Transpose Matrix: "<<endl;
    for(int i=0;i<4;i++){
        for(int j=0;j<3;j++){
            cout<<arr[j][i]<<" ";
        }
        cout<<endl;
    }
}
