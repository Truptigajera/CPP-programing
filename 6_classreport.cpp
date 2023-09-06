#include<iostream>
using namespace std;
class REPORT
{
	int adno;
	char name[20];
	float arr[5];
	float average;
	float GETAVG()
	{
        float total =0;
		cout<<"enter marrks in:";
        for(int i=0;i<5;i++)
        {
            cout<<"subject :"<<i+1<<":";
            cin>>arr[i];
            total+=arr[i];
        }
        return total/5;
	}
public:
	void READINFO()
    {
        cout<<"admin no:";
        cin>>adno;
        cout<<"student name:";
        cin>>name;
        
        average = GETAVG();

    }
	void DISPLAYINFO()
    {
        cout<<"admin no:"<<adno<<endl;
        cout<<"student name :"<<name<<endl;
        cout<<"marks are:"<<arr[0]<<" "<<arr[1]<<" "<<arr[2]<<" "<<arr[3]<<" "<<arr[4]<<endl;
        cout<<"Average :"<<average<<endl;
    }
	 	
};       
int main()
{
	REPORT r;
	r.READINFO();
	r.DISPLAYINFO();
	
	
}
