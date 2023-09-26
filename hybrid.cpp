#include<iostream>
using namespace std;
class base{
    public:
    int a;
    void setA(){
        cout<<"enter a:";
        cin>>a;
    }
};
class derived1 : public base{
    protected:
    int b;
    public:
    void setB(){
        cout<<"Enter b:";
        cin>>b;
    }
};
class derived2{
    protected:
    int c;
    public:
    void setC(){
        cout<<"enter c:";
        cin>>c;
    }
};
class ABC : public derived1 ,public derived2{
    int d;
    public:
    void setD(){
        cout<<"enter d:";
        cin>>d;
    }
    void product(){
        cout<<"prouct is:"<<a*b*c*d<<endl;
    }
};
int main(){
    ABC a;
    a.setA();
    a.setB();
    a.setC();
    a.setD();
    a.product();
}