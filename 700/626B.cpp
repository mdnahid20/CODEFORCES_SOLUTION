#include<iostream>
#include<cstdio>
#include<vector>
#include<set>
#include<map>
#include<deque>
#include<algorithm>
#include<string.h>
#include<cstring>
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

int calc(int got,int a,int b)
{

    if((a&&b)||(!a&&!b)||(a>1&&got)||(b>1&&got))
        return 1;
    return 0;
}
int main()
{
    int n;
    char s;
    map<char,int>mp;
    sc(n);
    fornt(0,n)
    {
        cin>>s;
        ++mp[s];
    }
    if(calc(mp['B'],mp['R'],mp['G']))
        cout<<"B";
    if(calc(mp['G'],mp['R'],mp['B']))
        cout<<"G";
    if(calc(mp['R'],mp['B'],mp['G']))
        cout<<"R";
    cout<<endl;
return 0;
}
