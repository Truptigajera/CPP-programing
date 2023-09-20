//multi level inheritance
#include<iostream>
using namespace std;
class Base1{
    protected:
    int a;
    public:
    void setA(){
        cout<<"Enter a:";
        cin>>a;
    }
};
class Base2 : public Base1
{
    protected:
    int b;
    public:
    void setB(){
        cout<<"Enter b:";
        cin>>b;
    }
};
class derived : public Base2{
    public:
    void getproduct(){
        cout<<"product of a and b is:"<<a*b<<endl;
    }
};
int main(){
    derived d;
    d.setA();
    d.setB();
    d.getproduct();
}