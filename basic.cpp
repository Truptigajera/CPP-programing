/*
    stdio.h     => iostream
    printf()    => cout
                << =>   insertion operator
                :: =>   scope resolution operator

    scanf() => cin
                >>  => extersion operator
*/
#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"hello world";
    cout<<"\nEnter a and b:";
    cin>>a>>b;

    // printf("Addition of %d and %d is:%d",a,b,a+b);
    cout<<"Addition of "<<a<<" and "<<b<<" is:"<<a+b;
}