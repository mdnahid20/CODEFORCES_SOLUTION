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


int main()
{
   fastread();
   int t;
   cin>>t;
   while(t--){
   ll n,x,y;
   cin>>n>>x>>y;
   ll mn = min(n,max((ll)1,(x+y-n+1)));
   ll mx = min(n,(x+y-1));
   cout<<mn<<" "<<mx<<endl;
}
}

