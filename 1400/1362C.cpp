#include<bits/stdc++.h>
#define fornt(i,index,n) for(int i=index;i<n;i++)
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
        long long n;
        cin>>n;

        long long ans=0,x,lg=0;
        long long b=2,i=1;
        x=n;
        while(x) lg++, x/=2;

        while(i<=lg)
        {
            long long y=n+1-(1LL<<(i-1));
            x=y/b+((y%b==0)?0:1);
            ans+=x*i;


            b*=2, i++;
        }

        cout<<ans<<endl;

    }
}

