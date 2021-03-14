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
    while(t--){
        ll n,r;
        cin>>n>>r;
        if(n>r)
            cout<<(r*(r+1))/2<<endl;
        else{
            --n;
            cout<<((n*(n+1))/2)+1<<endl;
        }
    }
}

