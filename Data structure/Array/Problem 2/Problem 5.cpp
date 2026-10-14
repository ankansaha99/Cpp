#include<iostream>
using namespace std;
int main (){
    int arr[10], arr2[10], siz, i, j, k = 0,cnt=0;
    bool con=false;
    cout<<"Enter Array size : ";
    cin >> siz;

    for(i=0;i<siz;i++)
    {
        cout<<"Enter the array value ["<<i<<"] : ";
        cin>>arr[i];
    }
    for (i=0;i<siz;i++){
        for(j=0;j<k;j++){
            if (arr[i] == arr2[j]){
                con=true;
                break;
            }
        }
        if(j == k){
            arr2[k]=arr[i];
            k++;
        }
    }
    cout<<endl;
    for(int i=0;i<k;i++){
        for(int j=0;j<siz;j++){
            if(arr2[i]==arr[j]){
                cnt ++;
            }
        }
        cout<<arr2[i]<<" occurs = "<<cnt<< " times"<<endl;
        cnt=0;
    }
    cout<<endl;
    for(int i=0;i<siz;i++)
    {
        cout<<arr[i]<<" ";
    }

    return 0;
}
