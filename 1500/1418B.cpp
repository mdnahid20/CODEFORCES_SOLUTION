#include<bits/stdc++.h>
#define fornt(k,n) for(int i=k; i<n; ++i)
#define fornt2(p,n) for(int i2=p; i2<n; ++i2)
#define fornt3(p,n) for(int i3=p; i3<n; ++i3)
#define pb push_back
#define ll long long
#define prY printf("YES\n")
#define prN printf("NO\n")
#define pry printf("yes\n")
#define prn printf("no\n")
#define N INT_MAX
using namespace std;


int main ()
{
  ios::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  int t;
  cin>>t;
  while(t--){
    int n,x;
    cin>>n;
    vector<int>a(n);
    vector<int>b;
    fornt(0,n)
    cin>>a[i];
    fornt(0,n)
    {
        cin>>x;
        if(!x)
       {
         b.pb(a[i]);
         a[i]=N;
       }
    }sort(b.begin(),b.end(),greater<>());
    int k(0);
    fornt(0,n)
    {
        if(a[i]==N)
        {
           a[i]=b[k];++k;
        }
    }
    fornt(0,n)
    cout<<a[i]<<' ';
    cout<<endl;
  }
}

