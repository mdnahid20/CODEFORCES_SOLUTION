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
    int r,c,d;
    cin>>r>>c>>d;
    int a[r*c+5];
    set<int>st;
    set<int>::iterator it;
    fornt(0,r*c)
    {
        cin>>a[i];
        st.insert(a[i]);
    }
    ll mi=10000000000;
    for(it=st.begin(); it!=st.end(); ++it)
    {
        ll k = *it;
        ll s(0),p(0);
        fornt(0,r*c)
        {
            int t = abs(a[i]-k);
            if(t%d!=0)
                break;
            else
              {++p;
                 s += (t/d);
              }
        }
        if(p==(r*c))
        mi = min(mi,s);
    }
    if(mi!=10000000000)
    cout<<mi<<endl;
    else
        cout<<-1<<endl;
}

