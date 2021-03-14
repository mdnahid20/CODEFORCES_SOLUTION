#include <iostream>
#include <cstring>

using namespace std;

const int maxn=1005;
int vis[maxn];
int p[maxn];
int main() {
  int n;
  cin >> n;
  for(int i=1;i<=n;i++) cin >> p[i] ;
  for(int i=1;i<=n;i++) {
        memset(vis,0,sizeof(vis));
      bool flag=1;
      int t=p[i];
      vis[i]++;
      while(flag) {
         vis[t]++;
          if(vis[t]>1){flag=0;break;}
         t=p[t];
      }
      if(!flag){cout << t ;if(i<n)cout <<" ";}
  }
  cout << endl;
  return 0;
}

