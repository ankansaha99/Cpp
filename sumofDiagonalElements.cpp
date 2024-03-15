#include <iostream>
using namespace std;

int main()

{
int i,j;
int A [5][5];
int sumdiagonal = 0;

cout<<"Enter the value of Array : " <<endl;

for(int i=0; i<5; i++) {
    for (int j=0; j<5; j++) {
        cin >> A[i][j];
    }
}
   cout<<"So the array you made :" << endl;

 for(int i=0; i<5; i++) {
    for (int j=0; j<5; j++) {
        cout << A[i][j]<< " ";
    }
    cout<< endl;
}

for(int i=0; i<5; i++) {
    for (int j=0; j<5; j++) {
            if (i==j || i+j==4)
        sumdiagonal = sumdiagonal + A [i][j];
    }
}
     cout<<endl;

cout<<"Summation of diagonal elements :" << sumdiagonal << endl;

return 0;

}
