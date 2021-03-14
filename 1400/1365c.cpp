#include<iostream>
#include<cstdio>
#include<map>
using namespace std;
map<int,int>m,mp;
map<int,int>::iterator it;
int main ()
{
    int n,i;
    scanf("%d",&n);
    int a[n],b[n];

    for(i=1; i<=n; ++i)
    {
        scanf("%d",&a[i]);
        m[a[i]] = i;
    }
    for(i=1; i<=n; ++i)
    {
        scanf("%d",&b[i]);
    }
    for(i=1; i<=n; ++i)
    {
        int p = m[b[i]]-i;
        if(p<0)
            p += n;
        mp[p]++;
    }
    int ans=0;
    for(it=mp.begin(); it!=mp.end(); ++it)
    {
        int k = it->second;
        ans = max(ans,k);
    }
    printf("%d\n",ans);
    return 0;
}
