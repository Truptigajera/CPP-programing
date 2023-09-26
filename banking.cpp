#include<iostream>
using namespace std;
class Bank{
    int acno;
    char name[50];
    float amt;
    int balance=10000;

    public:
    void deposit(){
         
        cout<<"enter your deposite amt:";
        cin>>amt;
        balance=balance+amt;
        cout<<"your deposite balance:"<<balance<<endl;

    }
    void withdraw(){
        cout<<"enter withdraw amt:";
        cin>>amt;
        if(amt<=balance){
            balance=balance-amt;
            cout<<"your balance::"<<balance<<endl;}
        else
            cout<<"not balance..."<<endl;
            
    }
    void showbalance(){
         
        cout<<"final balance:"<<balance<<endl;
    }



};

int main(){
    Bank b;
    int ch;
    while(ch!=4){
    cout<<"1.deposit:"<<endl;
    cout<<"2.withdraw:"<<endl;
    cout<<"3.showbalance:"<<endl;
    cout<<"exit:"<<endl;
    cin>>ch;

    switch(ch){   
        case 1:
        b.deposit();
        break;

        case 2:
        b.withdraw();
        break;

        case 3:
        b.showbalance();
        break;

        case 4:
        break;

        default:
        cout<<"wrong choice:";
        break;


    }}
   // b.deposit();
    //b.withdraw();
    //b.showbalance();
}