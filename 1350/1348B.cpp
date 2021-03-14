#include<iostream>
#include<cstdio>
#include<set>
using namespace std;

int main ()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int j,i,n,k;
        scanf("%d %d",&n,&k);
        int a[n];
        set<int>s;
        set<int>::iterator it;
        for(i=0; i<n; ++i)
        {
            scanf("%d",&a[i]);
            s.insert(a[i]);
        }
        int p=s.size();
        if(p>k)
        {
            printf("-1\n");
            continue;
        }
        printf("%d\n",n*k);
        for(i=0; i<n; ++i)
        {
            for (it=s.begin(); it != s.end(); ++it)
            cout<<*it<<' ';

            for(j=0; j<k-p; ++j)
                cout<<1<<' ';
        }
        printf("\n");
    }
}
