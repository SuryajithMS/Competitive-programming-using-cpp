#include<iostream>
using namespace std;

int main()
{
    int n,sum=0,j=1,mul=1;
    cout<<"enter n \n";
    cin >> n;
    for(int i=0;i<=n;i++)
    {
        sum=sum+i;
    }
    cout<<sum<<endl;

    while(j<n)
    {
        mul=mul*j;
        j++;
    }
    
    cout<<mul;

    return 0;
}