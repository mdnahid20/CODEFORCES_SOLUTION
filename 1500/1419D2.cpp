#include<iostream>
#include<cstdio>
#include<vector>
#include<set>
#include<map>
#include<algorithm>
#include<string.h>
#include<math.h>
#define fornt(k,n) for(int i=k; i<n; ++i)
#define fornt2(p,n) for(int i2=p; i2<n; ++i2)
#define fornt3(p,n) for(int i3=p; i3<n; ++i3)
#define pb push_back
#define ll long long
#define sc(n) scanf("%d",&n)
#define sc2(x,y) scanf("%d %d",&x,&y)
#define scl(n) scanf("%lld",&n)
#define scl2(x,y) scanf("%lld %lld",&x,&y)
#define pr(n) printf("%d\n",n)
#define prl(n) printf("%lld\n",n)
#define prY printf("YES\n")
#define prN printf("NO\n")
#define pry printf("yes\n")
#define prn printf("no\n")
using namespace std;


int main()
{
    vector<int> s, a, b;
    int n;
    sc(n);
    fornt(0,n){
        int x;
        sc(x);
        s.pb(x);
    }
    sort(s.begin(), s.end());
    for (int i = 0; i < n; i++) {
        if (i < n / 2)
            a.pb(s[i]);
        else
            b.pb(s[i]);
    }

    if(n<3){
        cout<<0<<endl;
        for(auto item:s){
            cout << item <<' ';
        }
        cout << endl;
        return 0;
    }
    s.clear();
    for (int i = 0; i < b.size(); i++) {
        s.pb(b[i]);
        if(i<a.size())
            s.pb(a[i]);
    }
    int ans = 0;
    for (int i = 1; i < s.size()-1;i+=2) {
        if(s[i-1]>s[i]&&s[i+1]>s[i])
            ans++;
    }
    if(n>=3){
        cout << ans << endl;
        for(auto item:s)
            cout << item <<' ';
        cout << endl;
    }
}
