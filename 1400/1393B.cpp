#include<bits/stdc++.h>
#define fornt(k,n) for(int i=k; i<n; ++i)
#define fornt2(p,n) for(int i2=p; i2<n; ++i2)
#define fornt3(p,n) for(int i3=p; i3<n; ++i3)
#define pb push_back
#define ll long long
#define fastread() (ios_base:: sync_with_stdio(false),cin.tie(NULL));
#define prY printf("YES\n")
#define prN printf("NO\n")
#define pry printf("yes\n")
#define prn printf("no\n")
using namespace std;


int main()
{
    fastread();
    int n,x;
    int cnt2(0),cnt4(0),cnt6(0),cnt8(0);
    map<int,int>mp;
    cin>>n;
    fornt(0,n)
    {
        cin>>x;
        mp[x]++;
        if(mp[x]==2)cnt2++;
        if(mp[x]==4)cnt4++;
        if(mp[x]==6)cnt6++;
        if(mp[x]==8)cnt8++;
    }
    cin>>n;
    char ch;
    fornt(0,n)
    {
        cin>>ch>>x;
        if(ch=='-')
        {
            mp[x]--;
            if(mp[x]==1)cnt2--;
            if(mp[x]==3)cnt4--;
            if(mp[x]==5)cnt6--;
            if(mp[x]==7)cnt8--;
        }
        else
        {
            mp[x]++;
            if(mp[x]==2)cnt2++;
            if(mp[x]==4)cnt4++;
            if(mp[x]==6)cnt6++;
            if(mp[x]==8)cnt8++;
        }
        if(cnt4 >=2 || cnt8 >= 1)
            prY;
        else if(cnt4==0)
            prN;
        else if((cnt6>=1 && cnt2>=2) || cnt2>=3)
            prY;
        else
            prN;

    }
}


