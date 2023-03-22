#include <iostream>
using namespace std;
int main()
{
    int i,j,k;
    cout<<"Enter the number of rows:";
    cin>>k;
    for(int i=1;i<=k;i++)
    {
        for(int j=1;j<=i;j++)
        {
            cout<<"*";
        }
        cout<<"\n";
    }
    return 0;
}