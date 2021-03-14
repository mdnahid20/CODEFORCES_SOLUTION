#include<iostream>
#include<cstdio>
#define sc(x,y) scanf("%d %d",&x,&y)
#define sc(x) scanf("%d",&x)
using namespace std;

bool v[51][51];
int main ()
{
    int t;
    sc(t);
    while(t--)
    {
        int n,i,j;
        sc(n);
        char c;
        for(i=0; i<n; ++i)
        {
            for(j=0; j<n; ++j)
            {
                cin>>c;
                v[i][j]=c-'0';
            }
        }
        bool ans=true;
        for (int i = n - 2; i >= 0; --i)
        {
            for (int j = n - 2; j >= 0; --j)
            {
                if(v[i][j] && !v[i+1][j] && !v[i][j+1])
                {
                    ans=false;
                }
            }
        }
        cout<<(ans ? "YES\n":"NO\n");
    }
}
