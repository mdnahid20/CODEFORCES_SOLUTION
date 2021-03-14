#include<iostream>
#include<cstdio>
#define sc(n) scanf("%d",&n)
#define sc2(x,y) scanf("%d %d",&x,&y)
#define pr(n) printf("%d\n",n);
#define fornt(i,n) for(i=0; i<n; ++i)
#define Max 10000000;
using namespace std;

int main ()
{
    int t;
    sc(t);
    while(t--)
    {int n,c(0),d(0);
        sc(n);
        while(n!=1)
        {
            ++c;
            if(d>1)
            {
                c=-1;
                break;
            }
            else if(n%6==0)
            {
                n /= 6;
                d=0;
            }
            else
            {
                d++;
                n *= 2;
            }}
        pr(c);
    }
}

