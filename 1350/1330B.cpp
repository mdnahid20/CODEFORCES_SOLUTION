#include <cstdio>
#include <algorithm>
#define maxn 200010
using namespace std;
int a[maxn],cnt[maxn],n,b[maxn];
int judge(int l,int r)
{
    int i,m;
    m=r-l+1;
    for(i=1; i<=m; i++)b[i]=a[l+i-1];
    sort(b+1,b+1+m);
    for(i=1; i<=m; i++)
        if(b[i]!=i)return 0;
    return 1;
}
int main()
{
    int t,i,b,k,l1,r1,l2,r2;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        for(i=1; i<=n; i++)cnt[i]=0;
        for(i=1; i<=n; i++)scanf("%d",&a[i]),cnt[a[i]]++;
        b=0;
        for(i=1; i<=n; i++)
            if(cnt[i]==2)b=i;
            else break;
        if(b==0)printf("0\n");
        else
        {
            k=0,l1=0,r1=0,l2=0,r2=0;
            if(judge(1,b)&&judge(b+1,n))k++,l1=b,r1=n-b;
            if(judge(1,n-b)&&judge(n-b+1,n))k++,l2=n-b,r2=b;
            if(k==2)
            {
                if(b==n-b)
                {
                    printf("1\n");
                    printf("%d %d\n",b,n-b);
                }
                else
                {
                    printf("2\n");
                    printf("%d %d\n",b,n-b);
                    printf("%d %d\n",n-b,b);
                }
            }
            else if(k==1)
            {
                printf("1\n");
                if(l1)printf("%d %d\n",l1,r1);
                else printf("%d %d\n",l2,r2);
            }
            else printf("0\n");
        }
    }
    return 0;
}




