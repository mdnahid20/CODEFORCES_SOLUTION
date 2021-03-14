#include<bits/stdc++.h>
#define fornt(i,n) for(int i=0;i<n;i++)
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
        int n,i;
        cin>>n;
     int a[n+5];
     fornt(i,n)
     cin>>a[i+2];
     sort(a+2,a+n+2);
     for(i=n+1; i>1; --i)
     {
         if(a[i]<i)
            break;
     }cout<<i<<endl;
    }
}

