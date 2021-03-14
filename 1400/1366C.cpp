#include<bits/stdc++.h>
#define int long long
#define rep(i,n) for(int i=0;i<n;i++)
#define pb push_back
#define fastread() (ios_base:: sync_with_stdio(false),cin.tie(NULL));
#define prY printf("YES\n")
#define prN printf("NO\n")
#define pry printf("yes\n")
#define prn printf("no\n")
using namespace std;



int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    // Fuck Ratings, I'm in Love with Experience.
    // Once a Charas, Always a CHARAS.

    int t;
    cin>>t;
    while(t--){
        int n, m, ans=0, x, y;
        cin>>n>>m;
        int a[n][m], p[n+m-1], q[n+m-1];
        memset(p, 0, sizeof(p));
        memset(q, 0, sizeof(q));
        rep(i, n){
            rep(j, m){
                cin>>a[i][j];
                if(!a[i][j]){
                    p[i+j]++;
                }
                else{
                    q[i+j]++;
                }
            }
        }
        int v=(m+n-2)/2;
        rep(i, v+1){
            if(i!=v or (m+n)%2!=0){
                x=p[i]+p[m+n-2-i];
                y=q[i]+q[n+m-2-i];
                ans+=min(x, y);
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}

