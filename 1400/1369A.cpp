#include<iostream>
#include<cstdio>
typedef long long ll;
using namespace std;
int main ()
{
    int t;
    ll n;
    cin>>t;
    while(t--)
    {
        scanf("%lld",&n);
        if(n%4==0)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }

}

