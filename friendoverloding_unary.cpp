#include<iostream>
using namespace std;
class Box{
    int l,b,h;
    public:
    void setdata(int x,int y,int z){
        l=x, b=y,h=z;
    }
    int getvolume(){
        return l*b*h;
    }
    friend Box operator++(Box m);
};
Box operator++(Box m){
    Box t;
    t.l=++m.l;
    t.b=++m.b;
    t.h=++m.h;
    return t;
}
int main(){
    Box b1,b2,b3;
    b1.setdata(2,3,4);
    cout<<"volume of Box B1 is:"<<b1.getvolume()<<endl;

    b2=++b1;
    cout<<"volume of Box B1 is:"<<b2.getvolume()<<endl;
}