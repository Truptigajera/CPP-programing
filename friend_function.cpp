#include<iostream>
using namespace std;
class Rect{
    friend Rect sum(Rect,Rect);
    int l,b;
    public:
    void setdata(int x,int y);
    int getarea()
    {
        return l*b;
    }
};
void Rect :: setdata (int x,int y){
    l=x, b=y;
}
Rect sum (Rect m, Rect n)
{
    Rect t;
    t.l=m.l+n.l;
    t.b=m.b+n.b;
    return t;
}
int main(){
    Rect r,s,z;
    r.setdata(5,6);
    cout<<"Area of Rectangle is:"<<r.getarea()<<endl;
    s.setdata(4,7);
    cout<<"Area of Rectangle is:"<<s.getarea()<<endl;
    z=sum(r,s); //9 13
    cout<<"area of Rectangle is:"<<z.getarea()<<endl;
}