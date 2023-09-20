//square singal inherotance
#include<iostream>
using namespace std;
class num{
    protected:
    int i,n,fact=1;
    public:
    void setA(){
        cout<<"Enter n:";
        cin>>n;
        
    }
};
class factorial :public num{
    public:
    void getA(){
        for(i=1;i<=5;i++){
            fact=fact*i;
            cout<<"no:"<<i<<endl;
        }
        
        cout<<"factorial value is:"<<fact<<endl;
    } 
};
int main()
{
    factorial d;
    d.setA();
    d.getA();
}
// result