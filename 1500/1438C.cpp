#include<bits/stdc++.h>
#define fornt(k,n) for(int i=k; i<n; ++i)
#define fornt2(p,n) for(int i2=p; i2<n; ++i2)
#define fornt3(p,n) for(int i3=p; i3<n; ++i3)
#define pb push_back
#define ll long long
#define prY printf("YES\n")
#define prN printf("NO\n")
#define pry printf("yes\n")
#define prn printf("no\n")
using namespace std;


int main ()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin>>t;
    while(t--)
    {
        ll n,m;
        cin>>n>>m;
        ll a[n+5][m+5];
        fornt(0,n)
        {
            fornt2(0,m)
            {
                cin>>a[i][i2];
                if(i%2==0 && i2%2!=0)
                {
                    if(a[i][i2]%2!=0)
                        a[i][i2]+=1;
                }
                else if(i%2!=0 && i2%2==0)
                {
                    if(a[i][i2]%2!=0)
                        a[i][i2]+=1;
                }else
                {
                    if(a[i][i2]%2==0)
                        a[i][i2]+=1;
                }
            }
        }
        fornt(0,n)
        {
            fornt2(0,m)
            cout<<a[i][i2]<<' ';
            cout<<endl;
        }
    }
}

