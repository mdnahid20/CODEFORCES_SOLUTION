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
        int n;
        string s;
        cin>>n>>s;
        int ans=n;
        int l=-1,r=-1;
        fornt(i,0,n)
        {
            if(s[i]=='1')
            {
                l = i+1;
                break;
            }
        }
        for(int i= n-1; i>=0; --i)
        {
            if(s[i]=='1')
            {
                r= i+1;
                break;
            }
        }
        if(l!=-1)
        {

            int p = max((n - l + 1),l) + max(l, n - l + 1);
            ans = max(ans,p);


            p = max(r,(n - r + 1)) + max(r, n - r + 1);
            ans = max(ans, p);
        }
        cout<<ans<<endl;
    }
}

