#include<iostream>
using namespace std;
class area{
    public:
    area(){
        cout<<"default area is:"<<endl;
    }
    area(int l,int w){
        cout<<"Rectengle area  is:"<<l*w<<endl;
    }
    area(int l){
        cout<<" Square area is:"<<l*l<<endl;
            }
    area(double b, double h,double a){
        cout<<"triangle area is:"<<a*b*h<<endl;
    }
    area(int r, double a){
        cout<<"circle area is:"<<a*r*r<<endl;
    }


};
int main()
{
    area d();
    area r(10,20);
    area s(20);
    area t(10,20,0.5);
    area c(10,3.14);
}