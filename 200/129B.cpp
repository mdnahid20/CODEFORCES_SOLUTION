#include<iostream>
#include<cstdio>
#include<vector>
#include<set>
using namespace std;


int main ()
{
    int i,n;
    int j,m;
    int x,y;
    int x1,y1;
    cin>>n>>m;
    vector< set<int> > v(n+1);

    for(i=0; i<m; i++)
    {
        cin>>x>>y;
        v[x].insert(y);  v[y].insert(x);
    }
    int ans=0;
    while(1)
    {
          vector<int>v1;
      for(i=1; i<=n; i++)
 {
     if(v[i].size()==1){ v1.push_back(i); }
 }
    for (int i = 0 ; i < v1.size() ; i++)
        {
            set<int>::iterator it = v [ v1[i] ].begin() ;
            v [ v1[i] ].clear() ;
            v [ *it ].erase(v1[i]) ;
        }
        if(v1.size()){ ++ans; }
        else { printf("%d",ans); return 0;}
    }}
