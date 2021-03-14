#include<stdio.h>

const int N = 200;

bool vis[N];
bool viss[N];
int p[N];
int t,n;

int main() {
	int k=0;
	for(int i=2; i<N; i++) {
		if(vis[i]==0) {
			p[k++]=i;
			viss[i]=1;
		}
		for(int j=i; j<N; j+=i)
			vis[j]=1;
	}
	scanf("%d",&t);
	while(t--) {
		scanf("%d",&n);
		int i;
		for(i=0; i<k; i++)
			if(p[i]>=n&&viss[p[i]-n+1]==0)
			    break;
		int ans=p[i]-n+1;
		for(int i=1; i<=n; i++) {
			for(int j=1; j<=n; j++)
				if(i==j) printf("%d ",ans);
				else printf("1 ");
			printf("\n");
		}
	}}
