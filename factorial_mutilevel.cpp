#include<iostream>
using namespace std;
class base1{
    protected:
    int n;
    public:
    void setA(){
        cout<<"Enter n:";
        cin>>n;
    }
};
    class base2 : public base1{
        protected:
        int i;
        public:
        void setB(){
            cout<<"Enter i";
            cin>>i;
            
        }
    };
    class derived:public base2{
        public:
        int a, fact;
        void getproduct(){
            for(a=i;a<=n;a++)
            {fact=fact*a;
            cout<<"no:"<<a<<endl;}
        
        cout<<"factorial is:"<<fact<<endl;}
    };


int main(){
    derived d;
    d.setA();
    d.setB();
    d.getproduct();
}