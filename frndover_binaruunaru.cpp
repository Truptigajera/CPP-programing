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
    friend Box operator+(Box m,Box n);
    friend Box operator++(Box m);
};
Box operator+(Box m,Box n){
    Box t;
    t.l=m.l+n.l;
    t.b=m.b+n.b;
    t.h=m.h+n.h;
    return t;
}
Box operator++(Box m){
    Box t;
    t.l=++m.l; 
    t.b=++m.b; 
    t.h=++m.h; 
    return t;
}
int main(){
    Box b1,b2,b3,b4;
    b1.setdata(2,3,4);
    cout<<"volume of Box B1 is:"<<b1.getvolume()<<endl;

    b2.setdata(4,5,6);
    cout<<"volume of Box B2 is:"<<b2.getvolume()<<endl;

    b3 = b1+b2;
    cout<<"volume of Box B3 is:"<<b3.getvolume()<<endl;

    b4=++b3;
    cout<<"volume of Box b4 is:"<<b4.getvolume()<<endl;
}