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
const int64_t MOD=1000000007;
using namespace std;


int main()
{
    fastread();
    int t;
    cin>>t;
    while(t--)
    {
        ll l(0),x;
        string s;
        cin>>x>>s;
        ll c=s.size();
        fornt(i,0,x)
        {
            ll k=s[i]-'0'-1;
            if(s.size()<x)
            {
                string a=s.substr(i+1,s.size());
                while(k--)
                {
                    s += a;
                    c += a.size();
                    if(c>MOD)
                        c %= MOD;
                }
            }
            else
            {
                (c+=k*(c-i-1+MOD))%=MOD;
            }

        }
        cout<<c<<endl;
    }
}






