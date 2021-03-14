#include<bits/stdc++.h>
#define MAX 1000001
#define sc(n) scanf("%d",&n)
using namespace std;
int n,m;
int c[MAX], ans=0;
vector<vector<int> > v(MAX);
bool visited[MAX];
void dfs(int x,int y)
{
    int k=0;
    visited[x] = true;
    if(y>m)
        return;

    int d=0;
    for(int i=0; i< v[x].size(); i++)
    {
        if(!visited[v[x][i]])
        {
            if(c[v[x][i]])
            {
                k=y+1;
            }
            else
            {
                k=0;
            }
            dfs(v[x][i], k);
            d=1;
        }
    }
    if(!d)
    {
        ans++;
    }
}

int main ()
{
    scanf("%d %d",&n,&m);
    int i;
    for(i=1; i<=n; ++i)
    {
        sc(c[i]);
    }
    int x,y;
    for(i=1; i<n; ++i)
    {
        sc(x);
        sc(y);
        v[x].push_back(y);
        v[y].push_back(x);
    }
    dfs(1 , c[1]);
    printf("%d\n",ans);
}
