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
        ll n;
        cin>>n;
        set<ll>s;
        set<ll>::iterator it;
        s.insert(0);
        ll  k = sqrt(n) + 1;
        fornt(i,1,k+1)
        {
            s.insert(n / i);
            ll j = n / i;
            if(j)
                s.insert(n / j);
        }

        cout<<s.size()<<endl;
        for(it=s.begin(); it!=s.end(); ++it)
            cout<<*it<<' ';
        cout<<endl;
    }
}




