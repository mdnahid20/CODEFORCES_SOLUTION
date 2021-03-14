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
    int n,mn=10000000,p;
    string s[55];
    sc(n);

    fornt(1,n+1)
    cin>>s[i];

    int length = s[1].length();
    fornt(1,n+1)
    {
        p = 0;
        fornt2(1,n+1)
        {
            int cnt=0,k;
            for(k=0; k<length; ++k)
            {
                if(s[i][0]==s[j][k])
                {
                    string s2(s[j].begin()+k,s[j].end());
                    string s3(s[j].begin(),s[j].begin()+k);
                    string d = s2+s3;
                    if(s[i]==d)
                    {
                        p += k;
                        cnt = 1;
                        break;
                    }
                }
            }if(k==length && !cnt)
            {
                printf("-1\n");return 0;
            }
        } mn = min(mn,p);
    }
    pr(mn);
}

