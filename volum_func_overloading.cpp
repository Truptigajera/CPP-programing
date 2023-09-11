#include<iostream>
using namespace std;
class volume{
    public:
    int calc(int l,int h,int w){
        return l*h*w;
    }
    int calc(int l){
       return l*l*l;
    }
    double calc(int r,int h,double a){
        return a*r*r*h;
            }
};
int main()
{
    volume a;
    cout<<"cuboid volume is:"<<a.calc(5,10,20)<<endl;
    cout<<"cube volume is:"<<a.calc(5)<<endl;
    cout<<"cylinder volume is:"<<a.calc(10,20,3.14)<<endl;
}