#include<iostream>
using namespace std;

int main()
{
    int pocketmoney=3000;
    int date;
    for(date=1;date<=30;date++)
    {
        if(date%2==0)
        {
            continue;
        }
        pocketmoney=pocketmoney-300;
        if(pocketmoney==0)
        {
            break;
        }   
        cout<<"go out for today"<<endl;
    }
}