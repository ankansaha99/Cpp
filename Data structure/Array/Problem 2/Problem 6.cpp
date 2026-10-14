#include<iostream>
using namespace std;
int main(){
    int mul[3][3];
    int arr1[3][3]={1,6,7,2,4,8,3,1,9};
    int arr2[3][3]={1,6,7,2,4,8,3,1,9};

    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            mul[i][j]=arr1[i][0]*arr2[0][j]+arr1[i][1]*arr2[1][j]+arr1[i][2]*arr2[2][j];
        }
    }
    cout<<endl<<endl;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<mul[i][j]<<" ";
        }
        cout<<endl;
    }

}
