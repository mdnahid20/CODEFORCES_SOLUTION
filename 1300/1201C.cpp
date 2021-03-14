/*** In the name of Allah(swt), the most gracious, most merciful.***/
/*** Alhamdulillah for Everything ***/

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
   int n,k;
   cin>>n>>k;
   ll a[n];
   fornt(i,0,n)
   cin>>a[i];
   sort(a,a+n);
   if(n!=1)
   cout<<min(a[n/2]+k,a[n-1]+1)<<endl;
   else
    cout<<a[0]+k<<endl;
}

