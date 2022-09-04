#include<iostream>
using namespace std;

class password
{
    int ep;
    int cp;
public:
    void setpass()
    {
        cout<<"Enter New Password\n";
        cin>>ep;
        cout<<"Password Saved Successfully\n";
        checkpass();
    }

void checkpass()
    {

        cout<<"Enter Password Again to Check\n";
        cin>>cp;
        if(cp==ep)
        {
            cout<<"Password is Correct"<<endl;
        }
        else
        {
            cout<<"Wrong Password"<<endl;
        }
    }

};

int main()
{
    int selector;
    cout<<"Enter 1 - Set Password\n";
    cout<<"Enter 2 - Check Password\n";
    cin>>selector;
    switch(selector)
    {
    // object declaration
    password p;
    case 1:
        p.setpass();
        break;
    case 2:
        p.checkpass();
        break;
    }

}
