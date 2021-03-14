#include<iostream>
#include<cstdio>
#include<queue>
#define ll long long
using namespace std;

int main ()
{
    ll k;
    int n;
    scanf("%lld %lld",&n,&k);
    int i,j(0),x;
    deque<int>q;
    for(i=0; i<n; ++i)
    {
        scanf("%d",&x);
        q.push_back(x);
    }
    ll p(0);
    if(k>=n)
        if (k >= n)
        {
            printf("%d\n",n);
            return 0;
        }
    while(1)
    {
        deque<int>::iterator d = q.begin();
        x=q.front();
        d++;
        while(d!=q.end())
        {
            if(x>*d)
            {
                ++p,++d;
            }
            else
                break;
        }
        if(p>=k)
        {
            printf("%d", x);
            return 0;
        }
        p=1;
        q.pop_front();
        q.push_back(x);
    }
}
