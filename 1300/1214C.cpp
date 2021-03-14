#include<iostream>
#include<cstdio>
#include<vector>
#include<set>
#include<map>
#include<string>
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

int main ()
{
    int n,i;
    sc(n);
    string s;
    cin>>s;
    int melt(0);
    for(i=0; i<n; ++i)
    {
        if(melt<(-1))
        {
            break;
        }
        if(s[i]=='(')
        {

            ++melt;
            continue;
        }
        if(s[i]==')')
        {
            --melt;
        }
    }
    if(melt!=0)
    {
        printf("No\n");
    }
    else
        printf("Yes\n");

}
