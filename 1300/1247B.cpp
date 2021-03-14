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
        int n,p,d;
        cin>>n>>p>>d;
        int a[n];
        map<int,int>mp;
        fornt(i,0,n)
        cin>>a[i];
        set<int>s;
        fornt(i,0,d)
        {
            ++mp[a[i]];
            s.insert(a[i]);
        }
        int mins=s.size();
        fornt(i,d,n)
        {
            --mp[a[i-d]];
            if(!mp[a[i-d]])
                s.erase(a[i-d]);

            ++mp[a[i]];
            s.insert(a[i]);
            int k=s.size();
            mins=min(k,mins);
        }
        cout<<mins<<endl;
    }
}

