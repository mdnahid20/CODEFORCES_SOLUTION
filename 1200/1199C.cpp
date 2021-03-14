/*** In the name of Allah(swt), the most gracious, most merciful.***/
/*** Alhamdulillah for Everything ***/

#include<bits/stdc++.h>
#define fornt(i,index,n) for(int i=index;i<n;i++)
#define pb push_back
#define ll long long
#define fastread() (ios_base:: sync_with_stdio(false),cin.tie(NULL));
#define prY printf("YES\n")
#define prN printf("NO\n")
#define pry printf("yes\n")
#define prn printf("no\n")
using namespace std;


const int maxn=400010;
int n,I,k,K,a[maxn];
map<int,int> mp;
vector<int> b;
int main()
{
    scanf("%d%d",&n,&I);
    I=8*I;
    for(int i=1; i<=n; i++)
    {
        scanf("%d",&a[i]);
        mp[a[i]]++;
    }
    for(map<int,int>::iterator it=mp.begin();
            it!=mp.end(); it++)
    {
        b.push_back(it->first);
    }
    int ans=INT_MAX;
    if(n*ceil(log2(mp.size()))<=I)
    {
        printf("0\n");
        return 0;
    }
    k=min(1<<(I/n),n);
    int sum=0,sz=mp.size();
    for(int i=0; i<k; i++)
    {
        sum+=mp[b[i]];
    }
    ans=min(ans,n-sum);
    for(int i=k; i<sz; i++)
    {
        sum-=mp[b[i-k]];
        sum+=mp[b[i]];
        ans=min(ans,n-sum);
    }
    printf("%d\n",ans);
    return 0;
}


