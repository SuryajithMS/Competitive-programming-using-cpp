#include<iostream>
using namespace std;
 
 int main()
 {
    int savings;
    cout<<"enter the amount";
    cin>>savings;
    if(savings>5000)
    {
        if(savings>10000)
        {
            cout<<"foam party";
        }
        else
        cout<<"party";
    }
    else if(savings>2000&& savings<5000)
    {
        cout<<"trip";
    }
    else{
        cout<<"stay home";
    }
 }