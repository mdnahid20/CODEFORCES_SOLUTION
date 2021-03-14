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
    int n;
    cin>>n;
    int a[n],c[n],b[n];
    map<int,bool>mp;
    fornt(i,0,n)
    {
        a[i]=i;
        c[i]=n-i-1;
    }
    fornt(i,0,n)
    {
        if(a[i]<=c[i])
        {
            int k=c[i]-a[i];
            if(!mp[k])
            {
                b[i]=k;
                mp[k]=true;
            }
            else
            {
                cout<<"-1\n";
                return 0;
            }
        }
        else
        {
            int k=n+c[i];
            k-=a[i];
            if(!mp[k])
            {
                b[i]=k;
                mp[k]=true;
            }
            else
            {
                cout<<"-1\n";
                return 0;
            }
        }
    }
    fornt(i,0,n)
    cout<<a[i]<<' ';
    cout<<endl;
    fornt(i,0,n)
    cout<<b[i]<<' ';
    cout<<endl;
    fornt(i,0,n)
    cout<<c[i]<<' ';
    cout<<endl;
}

