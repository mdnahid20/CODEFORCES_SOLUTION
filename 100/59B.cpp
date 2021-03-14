#import<iostream>
#import<cstdio>
using namespace std;
main()
{
    int n,c(0);
    int p,b=100000000,x;
    scanf("%d",&n);
    while(n--)
    {
        scanf("%d",&x);
        c+=x;
        if(x%2)
        {
            b=min(b,x);
        }
    }
    if(c%2)
    {
        printf("%d\n",c);
    }
    else
    {
        p=max(0,c-b);
       printf("%d\n",p);
    }
}
