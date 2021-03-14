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
    {
        int n;
        sc(n);
        string s;
        cin>>s;
        int c=0,d=0;
        int g=0,k=0;
        while(d<n)
        {
            if(s[d]=='(')
            {
                ++c;
            }
            else
            {
                if(c==0)
                {
                    while(s[d] != '(' && d<n)
                    {
                        ++d;
                        ++k;
                    }
                    --d;
                }
                else
                    {--c;}
            }
            ++d;
        }
        pr(k);
    }
}
