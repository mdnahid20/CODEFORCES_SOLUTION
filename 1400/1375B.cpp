#include<iostream>
#include<cstdio>
#include<vector>
#include<set>
#include<map>
#include<algorithm>
#include<string.h>
#define fornt(k,n) for(int i=k; i<n; ++i)
#define fornt2(p,n) for(int i2=p; i2<n; ++i2)
#define fornt3(p,n) for(int i3=p; i3<n; ++i3)
#define pb push_back
#define ll long long
#define sc(n) scanf("%d",&n)
#define sc2(x,y) scanf("%d %d",&x,&y)
#define scl(n) scanf("%lld",&n)
#define scl2(x,y) scanf("%lld %lld",&x,&y)
#define pr(n) printf("%d\n",n)
#define prl(n) printf("%lld\n",n)
#define prY printf("YES\n")
#define prN printf("NO\n")
#define pry printf("yes\n")
#define prn printf("no\n")
using namespace std;

int r,c;
bool check(int i,int j)
{
    if(i==1 && (j==1 || j==c))
        return true;
    if(i==r && (j==1 || j==c))
        return true;
    return false;
}
bool check2(int i,int j)
{
    if((i==1 || j==1) || (i==r || j==c))
        return true;
    return false;
}
int main ()
{
    int t;
    sc(t);
    while(t--)
    {
        sc2(r,c);
        ll a[r+5][c+5];
        int k(0);
        fornt(1,r+1)
        {
            fornt2(1,c+1)
            {
                scl(a[i][i2]);
                if(a[i][i2]>2 && check(i,i2))
                    k=1;
                else if(a[i][i2]>3 && check2(i,i2))
                    k=1;
                else if(a[i][i2]>4)
                    k=1;
            }
        }
        if(!k)
        {
            prY;
            fornt(1,r+1)
            {
                fornt2(1,c+1)
                {
                    if(check(i,i2))
                        cout<<2<<' ';
                    else if(check2(i,i2))
                        cout<<3<<' ';
                    else
                        cout<<4<<' ';
                }
                cout<<endl;
            }
        }
        else
            prN;
    }
    return 0;
}

