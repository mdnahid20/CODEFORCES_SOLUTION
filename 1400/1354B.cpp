#include<iostream>
#include<cstdio>
#include<vector>
#include<set>
#include<map>
#include<algorithm>
#define fornt(i,j,n) for(i=j; i<n; ++i)
#define pb push_back
#define ll long long
#define sc(n) scanf("%d",&n)
#define sc2(x,y) scanf("%d %d",&x,&y)
#define scl(n) scanf("%lld",&n)
#define scl2(x,y) scanf("%lld %lld",&x,&y)
#define pr(n) printf("%d\n",n)
#define prl(n) printf("%lld\n",n)
using namespace std;
int maximum(int a,int b,int c)
{
    if(a>=b && a>=c)
        return a;
    else if(b>=a && b>=c)
        return b;
    else
        return c;
}
int minimum(int a,int b,int c)
{
    if(a<=b && a<=c)
        return a;
    else if(b<=a && b<=c)
        return b;
    else
        return c;
}

int main ()
{
    int t,i,j;
    sc(t);
    while(t--)
    {
        int a=-1,b=-1,c=-1;
        int i,p=2000009;
        string s;
        cin>>s;
        for(i=0; i<s.size(); ++i)
        {
            if(s[i]=='1')
            {
                a=i;
            }
            else if(s[i]=='2')
            {
                b=i;
            }
            else if(s[i]=='3')
            {
                c=i;
            }
            if(a>=0&&b>=0&&c>=0)
            {
                int x=maximum(a,b,c);
                int y=minimum(a,b,c);
                int z=x-y+1;
                if(z<p)
                    p=z;
            }
        }
        if(p==2000009)
            printf("0\n");
        else
            printf("%d\n",p);
    }
}
