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
   int n,c(0),p(0),p1(0),l(-1),ans(0);
   cin>>n;
   string s;
   cin>>s;
   fornt(i,0,n)
   {
     if(s[i]=='(')
        ++c;
     if(s[i]==')')
        ++p;
     if(p>c && l<0)
     {
         l = i;
         p1 =1;
     }if(c==p && p1)
     {
         ans += (i-l+1);
         p1=0;l=-1;
     }
   }if(c*2!=n)
   {
       cout<<"-1\n";
       return 0;
   }
   cout<<ans<<endl;
}


