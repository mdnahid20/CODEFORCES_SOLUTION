#include<iostream>
#include<cstdio>
#include<map>
using namespace std;


int main ()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n;
        scanf("%d",&n);
        int arr[n],i;
        map<int,int>mp;
        int c=0,d;
        for(i=0; i<n; ++i)
        {
            scanf("%d",&arr[i]);
            ++mp[arr[i]];
            c = max( c, mp[arr[i]] );
        }int p =  mp.size();
        if(c==1 && n!=1)
        {
            printf("1\n");
        }
        else if(c!=p)
        {
            int d = min( c, p );
            printf("%d\n",d);
        }
        else
        {
          printf("%d\n",c-1);
        }
    }
}
