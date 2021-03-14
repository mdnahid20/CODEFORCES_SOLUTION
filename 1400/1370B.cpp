#include<iostream>
#include<cstdio>
#include<vector>

using namespace std;

int main ()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,i,p;
        scanf("%d",&n);
        vector< int > even,odd;
        for(i=1; i<=2*n; ++i)
        {
          scanf("%d",&p);
          if(p%2)
          odd.push_back(i);
          else
           even.push_back(i);
        }
        vector< pair< int,int > > v1;
        for(i=0; i+1 < odd.size(); i += 2)
            v1.push_back({odd[i], odd[i+1]});
        for(i=0; i+1 < even.size(); i += 2)
        v1.push_back({even[i], even[i+1]});
        for(i=0; i<n-1; i++)
        cout<<v1[i].first<<" "<<v1[i].second<<endl;
    }
return 0;
}
