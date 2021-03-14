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

   int t;

   cin>>t;

   while(t--){

   ll n,m;
   cin>>n>>m;
   ll preTem = 0, left1 = m, right1 = m;
   bool ok=true;
   while (n--)
   {
   ll temp, lw, hi;
   cin >> temp >> lw >> hi;
   left1 -= temp - preTem;
   right1 += temp - preTem;
    preTem = temp;
    left1 = max(left1, lw);
     right1 = min(right1, hi);
     if(left1 > right1) ok = false;
      }
      if(!ok)
      prN;
      else
      prY;
}
 return 0;
}
