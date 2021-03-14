/*** In the name of Allah(swt), the most gracious, most merciful.***/
/*** Alhamdulillah for Everything ***/

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
        int p,q,n;
        map<int,int>mp;
        cin>>p>>q>>n;
        int a[n],b[n],c[n];
        ll ans=0;
        c[0]=0;
        mp.clear();
        fornt(i,1,n)
        c[i]=i;
        fornt(i,0,n)
        {
            cin>>a[i];
            if(i)
                c[i]-=mp[a[i]];
            mp[a[i]]++;
        }
        mp.clear();
        fornt(i,0,n)
        {
            cin>>b[i];
            if(i)
                c[i]-=mp[b[i]];
            mp[b[i]]++;
            ans+=c[i];
        }
        cout<<ans<<endl;
    }
}




