#include<iostream>
#include<cstdio>
using namespace std;

int main ()
{
    int n,c,t,i;
    scanf("%d %d %d",&n,&t,&c);
    int x,l(0),k(0);
    for(i=0; i<n; ++i)
    {
        scanf("%d",&x);
        if(x<=t)
            ++k;
        else
        {
            if(k>=c)
                l += (k-(c-1));

            k=0;
        }
    }
    if(k>=c)
        l += (k-(c-1));

    printf("%d\n",l);
}
