#include<iostream>
using namespace std;
class batsman
{
    int bcode;
    char bname[20];
    int innings, notout, runs,batavg;
    float calcavg(){
        batavg=runs/(innings-notout);
    }
    public:
    batsman(){
        cout<<"enter bcode:";
        cin>>bcode;
        cout<<"enter name:";
        cin>>bname;
        cout<<"enter innings:";
        cin>>innings;
        cout<<"enter notout:";
        cin>>notout;
        cout<<"enter runs:";
        cin>>runs;
        batavg=runs/(innings-notout);
    }
    void displaydata()
    {
        cout<<"bcod:"<<bcode<<endl;
        cout<<"name:"<<bname<<endl;
        cout<<"innings:"<<innings<<endl;
        cout<<"notout:"<<notout<<endl;
        cout<<"batavg:"<<batavg<<endl;
        cout<<"runns:"<<runs<<endl;
    }
};
int main()
{
	batsman r;
	r.displaydata();	
}