#include<iostream>
#include<cstdio>
#include<math.h>
typedef long long ll;
using namespace std;

ll a[1007][1007],n;
int main()
{
    ll i,j,k;
    scanf("%lld",&n);
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            scanf("%lld",&a[i][j]);
        }
    }
    k = sqrt((a[0][1]*a[0][2])/a[1][2]);
    cout<<k<<' ';
    for (i=1; i<n; ++i)
    {
        cout<<a[0][i]/k<<' ';
    }
    cout<<endl;
    return 0;
}
