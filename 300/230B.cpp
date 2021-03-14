#include<iostream>
#include<cstdio>
#include<math.h>
#define ll long long int
using namespace std;
bool check(ll n)
{
    if(n<2)
    {
        return false;
    }
    if(n==2)
    {
        return true;
    }
    if(n%2==0)
    {
        return false;
    }
    ll limit=sqrt(n);
    for(ll i=3; i<=limit; i+=2)
    {
        if(n%i==0)
        {
            return false;
        }
    }
    return true;
}
int main ()
{
    ll n,num;
    cin>>n;
    while(n--)
    {
        cin>>num;
        ll d=sqrt(num);
        if(d*d==num && check(d))
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }
}
