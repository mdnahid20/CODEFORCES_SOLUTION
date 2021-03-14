#include <bits/stdc++.h>
using namespace std;
int a[100005],b[100005];
bool vis[100005];
int main()
{
    int n;
    scanf("%d",&n);
    for (int i=1;i<=n;i++)
    scanf("%d",&a[i]);                // -1 condition is always not present
    memset(b,-1,sizeof(b));
    for (int i=1;i<=n;i++)
    {
        if (a[i]!=a[i-1])
        {
            b[i]=a[i-1];
            vis[b[i]]=1;
        }
    }
    vis[a[n]]=1;
    int m=0;
    for (int i=1;i<=n;i++)
    {
        while (vis[m])         // firsy unvisited value tak loop kiya
        m++;
        if (b[i]==-1)
        {
            b[i]=m;
            vis[m]=1;
        }
        printf("%d ",b[i]);
    }
}
