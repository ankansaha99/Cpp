 #include<iostream>
using namespace std;

class Super
{
protected :
    int a;
public :

    void inputvalueforA ()
    {
        cout<<"ENTER VALUE FOR A : "<<endl;
        cin>>a;
    }
};

 class Sub1 : public Super


{


protected :
int b;
public :

    void inputvalueforB ()
    {
        cout<<"ENTER VALUE FOR B : "<<endl;
        cin>>b;
    }
};

class Sub2 : public Sub1
{
protected :
int c;
public :

    void inputvalueforC ()
    {
        inputvalueforA ();
        inputvalueforB ();
        cout<<"ENTER VALUE FOR C : "<<endl;
        cin>>c;

        cout<<"MULTIPICATION IS "<<a*b*c<<endl;
    }
};




int main ()
{
 Sub2 MUL;
 MUL.inputvalueforC();

}
