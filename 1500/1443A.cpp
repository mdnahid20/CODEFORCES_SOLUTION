#include<bits/stdc++.h>
#define ll long long
#define fornt(k,n) for(int i=k; i<n; ++i)
#define fornt2(p,n) for(int i2=p; i2<n; ++i2)
#define fornt3(p,n) for(int i3=p; i3<n; ++i3)
#define pb push_back
#define mkp(x,y) make_pair(x,y)
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
        int n;
        vector<int>v;
        cin>>n;
        int sum = 4*n;
        v.pb(sum);
        while(v.size()<n)
        {
            sum-=2;;
            int c(0);
            fornt2(0,v.size())
            {
                if(sum%v[i2]==0 || __gcd(sum,v[i2])==1)
                {
                    c=1;
                    break;
                }
            }
            if(!c)
                v.pb(sum);
        }
        fornt(0,n)
        cout<<v[i]<<' ';
        cout<<endl;
    }
}

