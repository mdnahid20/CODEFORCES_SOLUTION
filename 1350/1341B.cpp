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


int n, k;
int a[200005], b[200005];
int main()
{
    fastread();
    int t;
    cin>>t;
    while(t--)
    {
        cin>>n>>k;
        fornt(i,1,n+1)
        cin>>a[i];
        fornt(i,2,n)
        {
            b[i] = b[i-1];
            if(a[i]>a[i-1] && a[i]>a[i+1])	b[i]++;
        }
        b[n] = b[n-1];
        int maxn=-1, p;
        k -= 2;
        for(int i=2; i+k-1<=n; i++)
        {
            if(maxn < b[i+k-1]-b[i-1])
            {
                maxn = b[i+k-1]-b[i-1];
                p = i;
            }
        }
        cout<<maxn+1<<" "<<p-1<<endl;
    }
}
