#include<iostream>
using namespace std;

class large{
    int a,b;
    public:
    void setdata(int x,int y){
        a=x , b=y;
    }
        //cout<<"enter two no:";
        //cin>>a>>b;
    
    friend void max(large t);
};
void max(large t){
    cout<<"largest no:"<<((t.a > t.b)? t.a:t.b);
}
int main(){
    large t;
    t.setdata(10,20);
    max(t);
    
}
