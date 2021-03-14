#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;

int main ()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,i;
        scanf("%d",&n);
        int a[n],x;
        for(int i=1; i<=n; i++)
        {
            scanf("%d",&x);
            a[x]=i;
        }
        int ans[n],l,r;
        memset(ans,0,sizeof(ans));
        l=r=a[1];
        ans[1]=1;
        for(int i=2; i<=n; i++)
        {
            l=min(a[i],l);
            r=max(a[i],r);
            if(r-l+1<=i)
                ans[i]=1;
        }
        for(int i=1; i<=n; i++)
            printf("%d",ans[i]);

        printf("\n");
    }
}
