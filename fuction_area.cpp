#include<iostream>
using namespace std;
class area{
    public:
    int calc(int a){
        return a*a;
    }
    int calc(int l,int w){
        return l*w;
    }
    double calc(int r,double a){
        return r*r*a;
    }
    double calc(double b,double h,double a){
        return a*b*h;
    }

};
int main(){
    area a;
    cout<<"square area is:"<<a.calc(10)<<endl;
    cout<<"rectangle area is:"<<a.calc(10,15)<<endl;
    cout<<"circle area is:"<<a.calc(10,3.14)<<endl;
    cout<<"triangle area is:"<<a.calc(10,10,0.5)<<endl;
}