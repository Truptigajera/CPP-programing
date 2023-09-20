#include<iostream>
using namespace std;
class sub{
    protected:
    int eng,guj,sci;
    public:
    void setA(){
        cout<<"enter subjects:";
        cin>>eng>>sci>>guj;
    }
};
class result : public sub{
    public:
    void getA(){
        cout<<"value of eng is:"<<eng<<endl;
         cout<<"value of sci is:"<<sci<<endl;
          cout<<"value of guj is:"<<guj<<endl;
    }
};
int main()
{
result r;
r.setA();
r.getA();
}