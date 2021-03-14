#include<iostream>
#include<cstdio>
#include<vector>
#include<set>
#include<map>
#include<algorithm>
#define fornt(i,j,n) for(i=j; i<n; ++i)
#define fornt2(i,j) for(i=j; i>=0; --i)
#define pb push_back
#define ll long long
#define sc(n) scanf("%d",&n)
#define sc2(x,y) scanf("%d %d",&x,&y)
#define scl(n) scanf("%lld",&n)
#define scl2(x,y) scanf("%lld %lld",&x,&y)
#define pr(n) printf("%d\n",n)
#define prl(n) printf("%lld\n",n)

using namespace std;

int main()
{

    int n,a,cnt_1=0,cnt_0=0,cnt_max0=-1;
    cin>>n;
    while(n--)
    {
        cin>>a;
        if(a==1)
        {
            cnt_1++;
            if(cnt_0>0)
            {
                cnt_0--;
            }
        }
        if(a==0)
        {
            cnt_0++;
            if(cnt_0>cnt_max0)
                cnt_max0=cnt_0;
        }
    }
    int ans=cnt_1+cnt_max0;
    cout<<ans<<endl;
}
