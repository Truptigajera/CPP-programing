#include<iostream>
using namespace std;
class test
{
    //by default private
    
    int a;
    public:
    void hello()
    {
        a=50;
        cout<<"hello"<<endl;
        cout<<"value of a:"<<a;

    }
};
int main()
{
    test a; //a object
    a.hello();
}