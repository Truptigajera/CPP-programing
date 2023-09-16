#include<iostream>
using namespace std;
class train{
    int tno;
    char tname[20];
    char source[20],destination[20];
    float date,capacity;

    public:
    void inputdata(){
        cout<<"enter train number:";
        cin>>tno;
        cout<<"enter train name:";
        cin>>tname;
        cout<<"enter our source:";
        cin>>source;
        cout<<"enter our destination:";
        cin>>destination;
        cout<<"Date:";
        cin>>date;
        cout<<"capacity:";
        cin>>capacity;
    }
    void displaydata(){
        cout<<"train no:"<<tno<<endl;
        cout<<"train name:"<<tname<<endl;
        cout<<"train source:"<<source<<endl;
        cout<<"train destination:"<<destination<<endl;
        cout<<"train date:"<<date<<endl;
        cout<<"train capaciti:"<<capacity<<endl;
    }
};
int main(){
    train t;
    t.inputdata();
    t.displaydata();
}