#include<bits/stdc++.h>
#define rep(i,n) for(int i=0;i<n;i++)
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
       ll x,y,x1,y1;
       cin>>x>>y>>x1>>y1;
       cout<<(x1-x)*(y1-y)+1<<endl;
   }
}

