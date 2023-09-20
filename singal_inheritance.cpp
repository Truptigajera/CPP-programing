//singal inherotance
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
class derived :protected base{
    public:
    void getA(){
        base :: setA();
        cout<<"value of a is:"<<a<<endl;
    }
};
int main()
{
    derived d;
   // d.setA();
    d.getA();
}
// result