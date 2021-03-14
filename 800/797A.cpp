#include<iostream>
#include<cstdio>
using namespace std;

int main ()
{
    int n,k,a[100000];
    int i,c(0);
    scanf("%d %d",&n,&k);
    int p=n;
    while(c<k)
    {
        int l=0;
        for(i=2; i*i<=n; ++i)
        {
            if(n%i==0)
            {
                a[++c]=i;
                n/=i;
                l=1;
                break;
            }
        }
        if(!l)
            break;
    }
    if(c<k-1)
    {
        printf("-1\n");
    }
    else
    {
        c=1;
        for(i=1; i<k; ++i)
        {
            cout<<a[i]<<' ';
            c *= a[i];
        }
        cout<<p/c<<endl;
    }

}
