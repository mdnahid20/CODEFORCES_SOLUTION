#include<bits/stdc++.h>
#define fornt(k,n) for(int i=k; i<n; ++i)
#define fornt2(p,n) for(int i2=p; i2<n; ++i2)
#define fornt3(p,n) for(int i3=p; i3<n; ++i3)
#define pb push_back
#define ll long long
#define fastread() (ios_base:: sync_with_stdio(false),cin.tie(NULL));
#define prY printf("YES\n")
#define prN printf("NO\n")
#define pry printf("yes\n")
#define prn printf("no\n")
using namespace std;

int n,m;
int a[205],b[205];
bool isvalid(int x)
{
    fornt(0,n)
    {
        bool flag = false;
        fornt2(0,m)
        {
            int k=a[i]&b[i2];
            if((k|x) ==x)
            {
                flag =true;
                break;
            }
        }
        if(flag ==false)
            return false;
    }
    return true;
}
int main()
{
    fastread();
    cin>>n>>m;
    fornt(0,n)
    cin>>a[i];
    fornt(0,m)
    cin>>b[i];
    fornt3(0,(1<<9))
    {
        if(isvalid(i3))
        {
            cout<<i3<<endl;
            return 0;
        }
    }return 0;
}
