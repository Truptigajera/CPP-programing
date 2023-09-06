/*
constructor    => clss and function both name same
                => Automatically called when object is create
                => no return type and no return value
                => always in public section
                => type -> defualt, parameterzed, copy

*/
#include<iostream>
using namespace std;
class test{
    public:
    test(){
        cout<<"Default constructor is called..."<<endl;
    }
    test(int a){
        cout<<"parameterized construction is called...\na: "<<a<<endl;
    }
    test(char a){
        cout<<"parameterzid costructor is called...\na: "<<a<<endl;
    }
};

int main()
{
    test a('Z'),t(150),asd;
}