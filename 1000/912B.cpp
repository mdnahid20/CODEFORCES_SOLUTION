#include<iostream>
#include<cstdio>
#define ll long long
using namespace std;



int main ()
{
    ll n,k;
    scanf("%lld %lld",&n,&k);
    if(k==1)
    {
        cout<<n<<endl;
        return 0;
    }
    ll c=1;
    while(c<n)
    {
        c=2*c+1;
    }
    cout<<c<<endl;
    return 0;
}
