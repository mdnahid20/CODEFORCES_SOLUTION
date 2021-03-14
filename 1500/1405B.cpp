#include<bits/stdc++.h>
#define fornt(k,n) for(int i=k; i<n; ++i)
#define fornt2(p,n) for(int i2=p; i2<n; ++i2)
#define fornt3(p,n) for(int i3=p; i3<n; ++i3)
#define pb push_back
#define ll long long
#define fastread() (ios_base:: sync_with_stdio(false),cin.tie(NULL));
#define prY printf("YES\n")
#define prN printf("NO\n")
#define pry printf("yes\n")
#define prn printf("no\n")
using namespace std;


int main()
{
    fastread();
    int t;
    cin>>t;
    while(t--)
    {
        ll pos(0),neg(0),n,ans(0),c=1;
        cin>>n;
        ll a[n+5];
        fornt(0,n)
        cin>>a[i];
        fornt(0,n)
        {
            c=0;
            if(a[i]>=0)
                pos += a[i];
            else
            {
                neg += abs(a[i]);
                if(!pos)
                {
                    ans += neg;
                    neg=0;
                }
                if(pos<=neg)
                {
                    neg = neg-pos;
                    ans+=neg;
                    pos=neg=0;
                }
                else
                {
                    pos = pos-neg;
                    neg=0;
                }
            }
        }if(!c)
        cout<<ans<<endl;
    }
}

