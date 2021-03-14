#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
    int n,ans=0,x;
    cin>>n;
    vector<int> v;
    for(int i=0; i<n; i++)
    {
        cin>>x;
        v.push_back(x);
    }
    sort(v.begin(),v.end());
    int min=v[0],max=v[n-1];
    for(int i=0; i<n; i++)
    {
        if(v[i]>min && v[i]<max)
            ++ans;
    }
    cout<<ans<<endl;
    return 0;
}
