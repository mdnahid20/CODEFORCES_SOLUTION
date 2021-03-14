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


const int maxx=1e3+100;
int a[maxx],b[maxx],c[maxx];
int n;

int main()
{
	scanf("%d",&n);
	for(int i=1;i<=n;i++) scanf("%d",&a[i]),c[i]=a[i];
	ll _max=0;
	for(int k=1;k<=n;k++)
	{
		int pos=k;
		for(int i=pos-1;i>=1;i--) if(a[i]>a[i+1]) a[i]=a[i+1];
		for(int i=pos+1;i<=n;i++) if(a[i]>a[i-1]) a[i]=a[i-1];
		ll sum=0;
		for(int i=1;i<=n;i++) sum+=(ll)a[i];
		if(sum>_max)
		{
			_max=sum;
			for(int i=1;i<=n;i++) b[i]=a[i];
		}
		for(int i=1;i<=n;i++) a[i]=c[i];
	}

	for(int i=1;i<=n;i++) cout<<b[i]<<" ";cout<<endl;
	return 0;
}
