#include<iostream>
using namespace std;
class base{
    protected:
    int a;
    public:
    void setA(){
        cout<<"Enter a:";
        cin>>a;
    }
};
class derived1 :public base{
    protected:
    int b;
    public:
    void setB(){
        cout<<"Eneter b:";
        cin>>b;
    }
    void product(){
        cout<<"product of a and b is: "<<a*b<<endl;
    }
};
class derived2 : public base{
    protected:
    int c;
    public:
    void setC(){
        cout<<"enter c:";
        cin>>c;
    }
    void add(){
        cout<<"Addition of a and c is:"<<a+c<<endl;
    }
};
int main(){
    derived1 d1;
    d1.setA();
    d1.setB();
    d1.product();

    derived2 d2;
    d2.setA();
    d2.setC();
    d2.add();

}