#include <bits/stdc++.h>
using namespace std;
#define endl ("\n")
#define pi (3.141592653589)
#define mod 1e9+7
#define int long long
#define float double
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define all(c) c.begin(), c.end()
#define min3(a, b, c) min(c, min(a, b))
#define min4(a, b, c, d) min(d, min(c, min(a, b)))
#define rrep(i, n) for(int i=n-1;i>=0;i--)
#define rep(i,n) for(int i=0;i<n;i++)
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

const int N = 100100;
vector<int>g[N];
int size[N];


vector<int> centroid;
int n;
void dfs(int v,int p = -1){
  size[v] = 1;
  bool is= 1;

  for(int to : g[v])if(to!=p){
    dfs(to,v);
    size[v]+=size[to];
    if(size[to]>n/2)is = 0;
  }
  if(n-size[v] >n/2)is = 0;
  if(is)centroid.pb(v);
}


int32_t main(){
    fast

    // Fuck Ratings, I'm in Love with Experience.
    // Once a Charas, Always a CHARAS.

    int t=1;
    cin>>t;
    while(t--){
		cin >> n;
  for(int i=1;i<=n;i++)g[i].clear(),size[i] = 1;

  for(int i=1;i<n;i++){
    int a,b;
    cin>>a>>b;
    g[a].pb(b);
    g[b].pb(a);
  }
  centroid.clear();
  dfs(1);
  vector<pair<int, int>> ans;
  if(centroid.size() == 1){
    int to = g[1][0];
    ans.pb(mp(1,to));
    ans.pb(mp(1,to));
  }else{
    for(int to : g[centroid[0]]){
      if(to!=centroid[1]){
        ans.pb(mp(centroid[0],to));
        ans.pb(mp(to,centroid[1]));
        break;
      }
    }
  }
  assert(ans.size()== 2);
  for(auto it : ans){
    cout << it.ff<<" "<<it.ss<<endl;
  }
    }
    return 0;
}
