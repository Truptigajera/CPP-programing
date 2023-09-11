#include<iostream>
using namespace std;
class volume{
    public:
    volume(){
        cout<<"default constructor is called..."<<endl;
    }
    volume(int l,int h,int w){
        cout<<"cuboid volume is:"<<l*h*w<<endl;
    }
    volume(int l){
        cout<<"cube volume is:"<<l*l*l<<endl;
            }
    volume(int r, int h,double a){
        cout<<"cylinder volume is:"<<a*r*r*h<<endl;
    }

};
int main()
{
    volume a(5,10,20), b(5), c(10,20,3.14);
}