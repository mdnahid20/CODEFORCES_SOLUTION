#include<bits/stdc++.h>
#define fornt(i,index,n) for(int i=index;i<n;i++)
#define pb push_back
#define ll long long
#define fastread() (ios_base:: sync_with_stdio(false),cin.tie(NULL));
#define prY printf("YES\n")
#define prN printf("NO\n")
#define pry printf("yes\n")
#define prn printf("no\n")
#define maxn 100010
using namespace std;


int p[maxn];
int main()
{
    int t,n,i,flag;
    cin>>t;
    while(t--)
    {
        cin>>n;
        flag=0;
        fornt(i,1,n+1)cin>>p[i];
        p[0]=p[1];
        fornt(i,1,n+1)
        {
            if(p[i]-p[i-1]>=2)
            {
                flag=1;
                break;
            }
        }
        if(flag)cout<<"No\n";
        else cout<<"Yes\n";
    }
    return 0;
}

