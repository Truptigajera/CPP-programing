#include<iostream>
using namespace std;
class Test{
    int carRating;
    public:
    static int num; // declare
    void setRating(){
        cout<<"Enter car Rating:";
        cin>>carRating;
        num++;
    }
    void display(){
        cout<<"your Rating is:"<<carRating<<endl;
    }
};
int Test :: num=15;
int main(){
    cout<<"starting stage:"<<Test :: num<<endl;
    Test t1,t2,t3;
    t1.setRating();
    t1.display();
    t2.setRating();
    t2.display();
    cout<<"Ending stage:"<<Test :: num<<endl;
}