#include<bits/stdc++.h>
#define fornt(i,n) for(int i=0;i<n;i++)
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
    int t;
    cin>>t;
    while(t--)
    {
        int n;cin>>n;
        bool state(true);
        long cnt(0);
        for(long p = 1; p <= n; p++){
            long x; cin>>x;
            cnt += (state && p != x);
            state = (p == x);
        }
        cnt = min (cnt,2L);
        cout<<cnt<<endl;
    }
}

