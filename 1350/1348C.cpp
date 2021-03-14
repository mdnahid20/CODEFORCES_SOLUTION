#include <cstdio>
#include <cstring>
#include <algorithm>
#define maxn 100010
using namespace std;
char s[maxn];
int main(){
	int t,n,k,i;
	scanf("%d",&t);
	while(t--){
		scanf("%d%d",&n,&k);
		scanf("%s",s+1);
		sort(s+1,s+1+n);
		if(k==1){printf("%s\n",s+1);continue;}
		if(s[1]!=s[k]){printf("%c\n",s[k]);continue;}
		if(s[k]==s[n]){
			for(i=1;i<=(n-1+k)/k;i++)printf("%c",s[i]);
			printf("\n");continue;
		}
		if(s[k+1]==s[n]){
			printf("%c",s[k]);
			for(i=k+1;i<=n;i++)s[i-k]=s[i];
			n=n-(k+1)+1;
			for(i=1;i<=(n-1+k)/k;i++)printf("%c",s[i]);			printf("\n");continue;
		}
		for(i=k;i<=n;i++)printf("%c",s[i]);
		printf("\n");
	}
	return 0;

}
