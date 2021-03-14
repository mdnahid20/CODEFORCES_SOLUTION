#include<iostream>
#include<cstdio>
using namespace std;

int main ()
{
    int t,n,x,a,b,d,e;
    cin>>t;
    while(t--)
    {
        cin>>n>>x>>a>>b;
        if(a>b)
        {
            e=n-a;
            if(e>=x)
            {
                a+=x;d=a-b;printf("%d\n",d);continue;
            }
            else
            {
                a+=e;
                x -=e;
                e=b-1;
                if(e>=x)
                {
                    b-=x;
                    d=a-b;
                  printf("%d\n",d);
                    continue;
                }
                else
                {
                    d=a-1;
                 printf("%d\n",d);
                    continue;
                }
            }
        }
        else
        {
            e=n-b;
            if(e>=x)
            {
                b+=x;d=b-a;printf("%d\n",d);continue;
            }
            else
            {
                b+=e;
                x -=e;
                e=a-1;
                if(e>=x)
                {
                    a-=x;
                    d=b-a;
                    printf("%d\n",d);
                    continue;
                }
                else
                {
                    d=b-1;
                 printf("%d\n",d);
                    continue;
                }
            }
        }
    }
}
