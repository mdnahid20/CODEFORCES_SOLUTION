#include<bits/stdc++.h>
#define fornt(i,index,n) for(int i=index;i<n;i++)
#define pb push_back
#define ll long long
#define fastread() (ios_base:: sync_with_stdio(false),cin.tie(NULL));
#define prY printf("YES\n")
#define prN printf("NO\n")
#define pry printf("yes\n")
#define prn printf("no\n")
#define maxn 200010
using namespace std;

int a[maxn],b[maxn];
int main()
{
    fastread();
    int t;
    cin>>t;
    while(t--)
    {
        int flag(0),i,n;
        cin>>n;
        fornt(i,0,n)
        {
            cin>>a[i];
        }
        fornt(i,0,n)
        {
            b[i]=0;
        }
        fornt(i,0,n)
        {
            b[((i+a[i])%n+n)%n]++;
        }
        fornt(i,0,n)
        {
            if(b[i]>1)
            {
                flag=1;
                break;
            }
        }
        if(flag)prN;
        else prY;
    }
    return 0;
}
