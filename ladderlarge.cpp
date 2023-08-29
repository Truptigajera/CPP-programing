#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"a,b,c:";
    cin>>a>>b>>c;
    if(a>b && a>c)
        cout<<"largest no is:"<<a;
    
    else if(b>c)
        cout<<"largest no is:"<<b;

    else
        cout<<"largest no is:"<<c;
}