#include<iostream>
using namespace std;
class result{
    int no;
    char name[20];
    int eng,sci ;
    float avg;

    public:
    void setdata(){
        cout<<"Enter roll no:";
        cin>>no;
        cout<<"Enter student name:";
        cin>>name;
        cout<<"enter eng marks:";
        cin>>eng;
        cout<<"enter sci mark:";
        cin>>sci;
    }
    void getdata(){
        cout<<"Total marks is:"<<eng+sci<<endl;
        cout<<"average is :"<<(eng+sci)/2<<endl;
    }
};
int main(){
    result t[5];
    int i;
    for(i=0;i<2;i++){
        cout<<"enter data of:"<<i+1<<endl;
        t[i].setdata();
    }
    cout<<endl<<endl;
    for(i=0;i<2;i++){
        cout<<"display data of:"<<i+1<<endl;
        t[i].getdata();
    }
}
