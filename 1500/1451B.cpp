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
        string s;
        int n,q;
        cin>>n>>q;
        cin>>s;
        while(q--)
        {
            int l,r;
            cin>>l>>r;--l;--r;
            bool check=true;
             for(int i = 0; i < l and check; i++)
                if(s[i] == s[l]) check =false;
            for(int i = r+1; i < n and check; i++)
                if(s[i] == s[r])check=false;
            cout << (check? "NO" : "YES") << '\n';
            }
        }
}
