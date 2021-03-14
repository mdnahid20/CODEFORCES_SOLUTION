#include<iostream>
#include<cstdio>
#include<vector>
#include<set>
#include<map>
#include<algorithm>
#include<string.h>
#define fornt(i,j,n) for(i=j; i<n; ++i)
#define pb push_back
#define ll long long
#define sc(n) scanf("%d",&n)
#define sc2(x,y) scanf("%d %d",&x,&y)
#define scl(n) scanf("%lld",&n)
#define scl2(x,y) scanf("%lld %lld",&x,&y)
#define pr(n) printf("%d\n",n)
#define prl(n) printf("%lld\n",n)
#define pry printf("YES\n")
#define prn printf("NO\n")
using namespace std;

int main ()
{
    int test,i;
    sc(test);
    while(test--)
    {
        int n,a,b,c;
        int bob(0),alice(0);
        string s,As;
        sc2(n,a);
        sc2(b,c);
        cin>>s;
        fornt(i,0,n)
        {
            if(s[i]=='R' && b)
            {
                ++alice;
                --b;
                As += 'P';
            }
            else if(s[i]=='P' && c)
            {
                ++alice;
                --c;
                As += 'S';
            }
            else if(s[i]=='S' && a)
            {
                ++alice;
                --a;
                As += 'R';
            }
            else
                As += 'x';
        }
        int p=n/2+(n%2);
        if(alice<p)
        {
            prn;
            continue;
        }
        fornt(i,0,n)
        {
            if(As[i]!='x')
                continue;
            if(a)
            {
                As[i] = 'R';
                --a;
            }
            else if(b)
            {
                As[i] = 'P';
                --b;
            }
            else
            {
                As[i] = 'S';
                --c;
            }
        }
        pry;
        cout<<As<<endl;
    }
}



