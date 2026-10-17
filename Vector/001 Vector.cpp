#include<iostream>
#include<vector>
using namespace std;

int main(){

vector<int> vectorName;

vectorName.push_back(1);
vectorName.push_back(2);
vectorName.push_back(3);

for(int i=0;i<vectorName.size();i++){

    cout<<vectorName[i]<<" ";
}
cout<<"\n\nUsing iterator\n"<<endl;

vector<int>::iterator it1;

for(it1=vectorName.begin();it1!=vectorName.end();it1++){
    cout<<*it1<<" ";
}

cout<<"\n\nUse of auto op\n"<<endl;
for(auto element:vectorName){
    cout<<element<<" " ;
}
}
