#include<iostream>
using namespace std;
int main(){

  int i,j, marge[20];
  int array_1 [5]={10,20,30,40,50};
  int array_2 [7]={1,2,3,4,5,6,7};

 for(i=0; i<5; i++){
    marge[i]=array_1[i];
  }
  j=i;
  for(  i=0; i<7; i++){
    marge[i]=array_2[i];
    j++;
  }
  for(i=j-1;i>=0;i--){
    cout<<marge[i]<<" ";
  }

}
