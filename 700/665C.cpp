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
    int n,k;
    string s;
    cin>>s;
    k = s.size();
    fornt(1,k)
    {
        if(s[i]==s[i-1])
        {
            fornt2('a','z'+1)
            {
                if(s[i+1]!=j && s[i-1]!=j)
                {
                    s[i] = j;break;
                }
            }
        }
    }
    cout<<s<<endl;
}

