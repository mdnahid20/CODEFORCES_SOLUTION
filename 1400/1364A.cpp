#include<iostream>
#include<cstdio>
using namespace std;

int main ()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int i,j,n,x;
        scanf("%d %d",&n,&x);
        int a,sum(0),c(-1),d(0);
        for(i=0; i<n; ++i)
        {
            scanf("%d",&a);
            sum += a;
            if(a%x)
            {
                if(c==-1)
                c=i;
                d=i;
            }
        }
        if(!(sum%x))
        {
            if(c>-1)
            {
                printf("%d\n",n-min(c+1,n-d));
            }
            else
                printf("-1\n");
        }
        else
            printf("%d\n",n);
    }
}
