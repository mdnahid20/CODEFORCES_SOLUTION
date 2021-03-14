#include<bits/stdc++.h>
#define fornt(i,index,n) for(int i=index;i<n;i++)
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
        int n;
        cin>>n;
        int a[n+5];
        fornt(i,1,n+1)
        cin>>a[i];
        vector<int>v;
        fornt(i,1,n+1)
        {
            if (i==1 || i==n || (a[i-1]<a[i])!=(a[i]<a[i+1]))
            {
                v.push_back(a[i]);
            }
        }
        cout<<v.size()<<endl;
        fornt(i,0,v.size())
        cout<<v[i]<<' ';
        cout<<endl;
    }
}
