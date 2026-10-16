#include<iostream>
using namespace std;

int expo( int rate){

if (rate==1){
    return 1;
}else
    return rate * expo(rate-1);

}
int main(){

int ex = expo(4);
cout<<ex;

}
