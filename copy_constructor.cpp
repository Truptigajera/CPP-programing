#include<iostream>
using namespace std;
class test{
    int n;
    public:
    test(int a){
        n=a;
    }
    int getN(){
        return n;
    }
    test(test &x){
        n=x.n;
    }
};
int main()
{
    test t(100);
    cout<<"value of n is:"<<t.getN()<<endl;

    test a(t);
    cout<<"New value n is:"<<a.getN()<<endl;
}