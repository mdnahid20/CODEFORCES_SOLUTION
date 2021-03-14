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
        int n,c(0),x,mx(0);
        cin>>n;
        map<int,int>m;
        fornt(0,n)
        {
            cin>>x;
            m[x]++;
            if(m[x]>mx)
            {
                mx=m[x];c=1;
            }else if(mx == m[x])
            ++c;
        }
            cout<<(n-c)/(mx-1)-1<<endl;
    }
}

