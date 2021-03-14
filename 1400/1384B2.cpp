#include<bits/stdc++.h>
#define fornt(k,n) for(int i=k; i<n; ++i)
#define fornt2(p,n) for(int i2=p; i2<n; ++i2)
#define fornt3(p,n) for(int i3=p; i3<n; ++i3)
#define pb push_back
#define ll long long
#define fastread() (ios_base:: sync_with_stdio(false),cin.tie(NULL));
#define prY printf("YES\n")
#define prN printf("NO\n")
#define pry printf("Yes\n")
#define prn printf("No\n")
using namespace std;
const int N=3e5 + 5;
int d[N];
void solve()
{
    int n,k,l;
    cin>>n>>k>>l;
    fornt(0,n)
    cin>>d[i];
    int tim = 0;
    fornt(0,n)
    {
        if(d[i]>l)
        {
            prn;
            return;
        }
        if(d[i]+k<=l)
            tim = 0;
        int time_depth = k- tim;
        time_depth = abs(time_depth);
        if(time_depth+d[i]<=l)
        {
            ++tim;
            continue;
        }
        else
        {
            if(tim>=k)
            {
                prn;
                return;
            }
            else
            {
                int  req_time = l -d[i];
                req_time = k - req_time;
                tim = req_time +1;
            }
        }
    }pry;
    return;
}
int main()
{
    fastread();
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
}

