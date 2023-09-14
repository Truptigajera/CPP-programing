/*
Destructor  => class and function both name same
            => Automatically called when object is create
            => No return type and no return value
            => always in public section
            => tield sign(~)
*/
#include<iostream>
using namespace std;
class test{
    public:
    test(){
        cout<<"defualt constructor is called..."<<endl;
    }
    ~test(){
        cout<<"Destructor is called..."<<endl;
    }
    test(int a){
        cout<<"parameterized constructor is called...\na:"<<a<<endl;
    }
    test(char a){
        cout<<"parameteretized constructor is called..\na:"<<a<<endl;
    }
};
int main()
{
    test a('Z'), t(150),asd;
}