#include<iostream>
#include<cstdio>
#include<vector>
#include<algorithm>
using namespace std;

int main ()
{
    int n,k,i;
    scanf("%d %d", &n, &k);
    vector<int>v;
    for(i=1; i<k; ++i)
    {
        if(n%i==0)
        {
            int x = i;
            while(1)
            {
                if((x/k)*(x%k)==n)
                {
                    v.push_back(x); break;
                }x += k;
            }
        }
    }
    sort(v.begin(),v.end());
    printf("%d\n",v[0]);
    return 0;
}
