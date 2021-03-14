#include<iostream>
#include<cstdio>
#include<set>
using namespace std;

int main ()
{
    int t,m,n;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d %d",&n,&m);
        int i,j;
        bool a[53][53]= {0};
        set< int > r,c;
        for(i=1; i<=n; i++)
        {
            for(j=1; j<=m; j++)
            {
                scanf("%d",&a[i][j]);
                if(a[i][j]==1)
                    r.insert(i),c.insert(j);
            }
        }
        int p = min(n-r.size(), m-c.size());
       if(p%2)
        {
            printf("Ashish\n");
        }
        else
        {
            printf("Vivek\n");
        }
    }
}
