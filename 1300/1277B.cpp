#include<iostream>
#include<cstdio>
#include<map>
typedef long long ll;
using namespace std;

map <ll, ll, greater<ll> > m;
map<ll,ll>::iterator it;
int main ()
{
    ll t,n,p;
    ll c,x,i;
    cin>>t;
    while(t--)
    {
        cin>>n;
        for(i=0; i<n; ++i)
        {
            cin>>x;
            if(x%2==0)
                m[x]++;
        }
        c=0;
        while(true)
        {
            if(m.size()==0)
                break;
            it = m.begin();
            ll p = it->first;
            p/=2;
            c++;
            if(p%2!=0)
            {
                m.erase(it);
            }
            else
            {
                m[p]++;
                m.erase(it);
            }
        }
        cout<<c<<endl;
    }
}
