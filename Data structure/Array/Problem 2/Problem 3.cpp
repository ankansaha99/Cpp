#include<iostream>
using namespace std;
int main (){
    int arr[10], arr2[10], siz, i, j, k = 0;
    bool con=false;
    cout<<"Enter Array size : ";
    cin>>siz;
    for (i=0;i<siz; i++){
        cout << "Enter the array value: ["<<i<<"] ";
        cin >> arr[i];
    }
    for (i=0;i<siz;i++){
        for (j=0;j<k;j++){
            if (arr[i] == arr2[j]){
                con=true;
                break;
            }
        }
        if(j==k){
            arr2[k]=arr[i];
            k++;
        }
    }
    cout<<endl;
    if(con){
        for(i=0;i<k;i++){
            cout << arr2[i] << " ";
        }
    }else{
        cout<<"Array already unique!"<<endl;
    }
    return 0;
}
