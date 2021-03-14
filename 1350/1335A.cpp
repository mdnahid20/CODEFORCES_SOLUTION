#include<iostream>
using namespace std;

int main ()
{
    long int t,i,n;
    cin>>t;
    for(i=0; i<t; i++)
    {
        cin>>n;
        if(n<=2)
        {
            cout<<"0\n";
            continue;
        }
        if(n%2!=0)
        {
            cout<<n/2<<endl;
            continue;
        }
        if(n%2==0)
        {
            cout<<(n/2)-1<<endl;
        }
    }
}
