#include<bits/stdc++.h>
#define pb push_back
#define int long long
#define fornt(k,n) for(int i=k; i<n; ++i)
#define fornt2(p,n) for(int i2=p; i2<n; ++i2)
#define fornt3(p,n) for(int i3=p; i3<n; ++i3)
#define prY printf("YES\n")
#define prN printf("NO\n")
#define pry printf("yes\n")
#define prn printf("no\n")
using namespace std;


signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;


    while(t--)
    {
        int p, q;
        int ans;
        ans=0;
        cin >> p >> q;
        if(p % q != 0)cout << p << endl;
        else
        {
            int tmp;
            for(int i=1;i*i<=q;i++){
                if(q%i==0){
                if(i!=1){
                    tmp=p;
                    while(tmp%q==0){
                        tmp/=i;
                    }
                    ans=max(ans,tmp);
                }
                tmp=p;
                while(tmp%q==0){
                    tmp/=q/i;
                }
                ans=max(ans,tmp);
            }
            }
            cout<<ans<<endl;
        }
    }
}
