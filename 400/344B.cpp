#include<iostream>
#include<cstdio>
#include<vector>
#include<set>
#include<map>
#include<algorithm>
#include<string.h>
#define fornt(k,n) for(int i=k; i<n; ++i)
#define fornt2(p,n) for(int j=p; j<n; ++j)
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
    int a,b,c,p;
    sc(a),sc2(b,c);
    p = a+b+c;
     if(p%2==0)
     {
         p /= 2;
         int bond = p - c;
         int bond2 = p - a;
         int bond3 = p - b;
         if(bond>=0 && bond2>=0 && bond3>=0)
            printf("%d %d %d\n",bond,bond2,bond3);
         else
            printf("Impossible\n");
     }
    else
     printf("Impossible\n");
}


