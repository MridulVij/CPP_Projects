//#include<bits/stdc++.h>
#include<iostream>
#include<conio.h>

using namespace std;

class pack {
public:
    void openacc()
    {
    string un[10];
    double np[10];
    long long int ph[20];
    long double eid[15];

    cout<<"Enter the Required Details"<<endl;
    cout<<"Enter User Name"<<endl; // user name
    cin>>un[10];
    cout<<"Enter Email ID"<<endl; // email id
    cin>>eid[15];
    cout<<"Enter New Password"<<endl; // password
    cin>>np[10];
    cout<<"Enter Phone Number"<<endl; // phone no
    cin>>ph[20];
    }
};


int main()
{
    pack p;
    int selector;
    cout<<"Enter 1 - Open an account"<<endl;
    cout<<"Enter 2 - Show account details"<<endl;
    cout<<"Enter 3 - Deposit"<<endl;
    cout<<"Enter 4 - Withdraw"<<endl;
    cout<<"Enter 5 - Search and exit"<<endl;
    cin>>selector;
    switch(selector)
    {
    case 1:
        p.openacc();
        break;
    case 2:
        cout<<"coming soon";
    default:
        break;

    }
    return 0;
}
// pending project
