#include<iostream>
#include<cstdio>
#include<map>
#include<algorithm>
using namespace std;


int main ()
{
    int n,m,i;
    map<int,bool>mp;
    scanf("%d",&n);
    int a[n];
    for(i=0; i<n; ++i)
    {
        scanf("%d",&a[i]);
        mp[a[i]]=1;
    }scanf("%d",&m);
    int b[m];
    for(i=0; i<m; ++i)
    {
        scanf("%d",&b[i]); mp[b[i]]=1;
    }
    sort(a,a+n);
    sort(b,b+m);
    for(i=n-1; i>=0; --i)
    {
        for(int i2=m-1; i2>=0; --i2)
        {
            if(!mp[a[i]+b[i2]])
            {
                printf("%d %d\n",a[i],b[i2]);
                return 0;
            }
        }
    }
}
