#include<iostream>
using namespace std;
class Box{
    int l,b,h;
    public:
    void setdata(int x,int y, int z){
        l=x,b=y,h=z;
    }
    int getvolume(){
        return l*b*h;
    }
    Box operator--(int){
        Box t;
        t.l=l--;
        t.b=b--;
        t.h=h--;
        return t;
    }
};
int main(){
        Box b1;
        b1.setdata(2,3,4);
        cout<<"volume of Box B1 is:"<<b1.getvolume()<<endl;

        //++b1;         //3 4 5
        b1--;
        cout<<"New volume of Box B1 is:"<<b1.getvolume()<<endl;
}