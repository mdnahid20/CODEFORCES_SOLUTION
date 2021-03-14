#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main ()
{
    int n,t,i,c,p,a,d;
    cin>>t;
    while(t--)
    {cin>>n;
    int arr2[n],maximum=0;vector<int> v[n];
        for(i=0; i<n; i++)
        {
             cin>>arr2[i];
             v[i].push_back(-1);
        }
        sort(arr2,arr2+n);
      for(i=0; i<n; i++)
      {c=0;d=n+1;
          while(d--)
          {p=v[c].size();
          a=arr2[i]-v[c][p-1];
              if(a>1){v[c].push_back(arr2[i]);break;}
              ++c;
          }if(c>maximum){maximum=c;}
      }cout<<maximum+1<<endl;
    }
}
