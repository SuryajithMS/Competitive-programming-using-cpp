#include<iostream>
using namespace std;

int main()
{
    char button;
    cout<<"Enter a character: ";
    cin>>button;
    switch (button)
    {
    case 'a':
        cout<<"You entered a"<<endl;
        break;
    case 'b':
        cout<<"You entered b"<<endl;
        break;
    case 'c':
        cout<<"You entered c"<<endl;
        break;        
    
    default:
        cout<<"You entered something else"<<endl;
        break;
    }
}