#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;

int main ()
{
    double n1,n2,mi,ma;
    int num[100007],c(0),n,i;
    scanf("%d %lf %lf",&n,&n1,&n2);
    for(i=0; i<n; ++i)
    {
        scanf("%d",&num[i]);
    }
    mi=min(n1,n2);
    ma=max(n1,n2);
    n1=n2=0;
    sort(num,num+n);
    for(i=n-1; c<mi; --i)
    {
        n1+=num[i];
        ++c;
    }
    int p=c;
    c=0;
    for(i=n-1-p; c<ma; --i)
    {
        n2+=num[i];
        ++c;
    }
    double k=n1/mi+n2/ma;
    printf("%.8lf\n",k);
}
