#include<iostream>
#include<cstdio>
#include<vector>
#include<set>
#include<map>
#include<algorithm>
#include<string.h>
#define fornt(k,n) for(int i=k; i<n; ++i)
#define fornt2(p,n) for(int j=p; j<n; ++j)
#define pb push_back
#define ll long long
#define sc(n) scanf("%d",&n)
#define sc2(x,y) scanf("%d %d",&x,&y)
#define scl(n) scanf("%lld",&n)
#define scl2(x,y) scanf("%lld %lld",&x,&y)
#define pr(n) printf("%d\n",n)
#define prl(n) printf("%lld\n",n)
#define pry printf("YES\n")
#define prn printf("NO\n")
using namespace std;
const int N = 100010;
int t,n,a[N],maxn = INT_MIN;
bool mysort(int a,int b){
	return abs(a)>abs(b);
}
int main(){
	cin>>t;
	while(t--){
		cin>>n;
		maxn = INT_MIN;
		fornt(0,n){
			cin>>a[i];
			maxn = max(maxn,a[i]);
		}
		sort(a,a+n,mysort);
		if(maxn<=0){
			cout<<(ll)a[n-1]*a[n-2]*a[n-3]*a[n-4]*a[n-5]<<endl;
			continue;
		}
		ll ans = (ll)a[0]*a[1]*a[2]*a[3]*a[4];
		if(ans==0){
			cout<<0<<endl;
			continue;
		}
		fornt(0,5){
			ll tmp = (ll)a[0]*a[1]*a[2]*a[3]*a[4]/a[i];
			fornt2(5,n){
				ans = max(ans,(ll)tmp*a[j]);
			}
		}
		cout<<ans<<endl;
	}
	return 0;
}

