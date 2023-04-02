#include <iostream>
using namespace std;
int main()
{
    int num,binary;
    cout<<"Enter the number:";
    cin>>num;
    cout<<"The binary form is:";
    while(num>0)
    {
        binary=num%2;
        cout<<binary;
        num/=2;
    }
    return 0;
}