#include <iostream>
#include <algorithm>
#define ll long long
using namespace std;

int main()
{
    ll n;
    cin>>n;
    ll a[n];
    for(int i=0; i<n; i++)
        cin>>a[i];

    for(int i=0; i<n; i++)
    {
        ll  mi,ma;
        if(!i)
        {
            mi=abs(a[i]-a[i+1]);
            ma=abs(a[i]-a[n-1]);
        }
        else if(i==n-1)
        {
            ma=abs(a[i]-a[0]);
            mi=abs(a[i]-a[i-1]);
        }
        else
        {
            mi=min(abs(a[i]-a[i+1]),abs(a[i]-a[i-1]));
            ma=max(abs(a[i]-a[0]),abs(a[i]-a[n-1]));
        }
        cout<<mi<<" "<<ma<<endl;
    }
    return 0;
}
