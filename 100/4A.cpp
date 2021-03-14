#include<iostream>
using namespace std;

int main ()
{
    int n;
    cin>>n;

    if(n<=2)
    {
        cout<<"NO\n";
        return 0;
    }
    if(n%2!=0)
    {
        cout<<"NO\n";
    }
    if(n%2==0)
    {
        cout<<"YES\n";
        return 0;
    }

}
