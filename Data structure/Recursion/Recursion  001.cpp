#include<iostream>
using namespace std;

int factorial(int n);


int main(){

int fact = factorial(5);
cout<<fact;

}
int factorial(int n){

if(n==1){
    return 1;
}else
    return n*factorial(n-1);


}
