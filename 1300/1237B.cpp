#include<iostream>
#include<cstdio>
#include<map>
using namespace std;

int main ()
{
    int n,i;
    scanf("%d",&n);
    int x,c(0);
    int a[n],b[n];
    map<int,bool>mp;
    for(i=0; i<n; ++i)
    {
        scanf("%d",&a[i]);
    }
    for(i=0; i<n; ++i)
    {
        scanf("%d",&b[i]);
    }
    int k=0;
    for (i = 0; i<n && k<n-1; ++i)
    {
        if (mp[a[i]])
            continue;
        while(k<n-1 && a[i]!=b[k])
        {
            mp[b[k++]] = true;
            ++c;
        }
        b[k++] = true;
    }
    printf("%d\n",c);
}
