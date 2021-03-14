#include<bits/stdc++.h>
#define fornt(i,index,n) for(int i=index;i<n;i++)
#define pb push_back
#define ll long long
#define fastread() (ios_base:: sync_with_stdio(false),cin.tie(NULL));
#define prY printf("YES\n")
#define prN printf("NO\n")
#define pry printf("yes\n")
#define prn printf("no\n")
#define N 1e+18
using namespace std;

int main()
{
    fastread();
    int t;
    cin>>t;
    while(t--)
    {
        int res[31]= {0};
        res[0] = 1;

        fornt(i,1,31)
        res[i] = res[i-1]*2;
        int n;
        cin>>n;
        int arr[n+1];
        fornt(i,0,n)
        cin>>arr[i];
        int  ans = 0;

        fornt(i,0,n-1)
        {
            if (arr[i] > arr[i+1])
            {
                int j;
               for(j=i+1; j<n; j++)
                {
                    ll d = arr[i]-arr[j];
                    if (d < 0) break;
                   int k = upper_bound(res,res+31,d)-res;
                    ans = max (ans,k);
                }
                i = j-1;
            }
        }
        cout<<ans<<endl;
    }
}
