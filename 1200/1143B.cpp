#include<iostream>
#define ll long long
using namespace std;

ll num[30];
ll nums(ll num[],ll k)
{
    ll m=1,t=k,i;
    while(num[t]==0)
    {
        t--;
    }
    for(i=t; i>=0; i--)
    {

        m*=num[i];
    }
    return m;
}
int main()
{
    ll ans(1),i;
    ll n,c(0);
    cin>>n;
    while(n)
    {
        ll b=n%10;
        num[c++]=b;
        ans*=b;
        n/=10;
    }
    for(i=0; i<c-1; i++)
    {
        if(num[i]==9)continue;
        num[i]=9;
        num[i+1]--;
        ans=max(ans,nums(num,c));
    }
    cout<<ans<<endl;
    return 0;
}
