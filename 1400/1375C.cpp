#include<iostream>
#include<cstdio>
using namespace std;


int main()
{
    int t,n,i;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        int a[n];
        for(i=1; i<=n; i++)
        {
            scanf("%d",&a[i]);
        }
        if(a[1]>a[n])
            printf("NO\n");
        else
            printf("YES\n");
    }
    return 0;
}
