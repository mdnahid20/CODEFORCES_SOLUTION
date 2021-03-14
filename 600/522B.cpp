#include<iostream>
#include<algorithm>
#define pp pair<int,int>
using namespace std;

int main()
{
    int n,i;
    cin>>n;
     pair<int,int>a[n];
    pair<int,int>b[n];
    int x,y,w(0);
    for(i=0; i<n; i++)
    {
        cin>>x>>y;
        a[i]=make_pair(x,y);
        w+=x;
        b[i]=make_pair(y,i+1);
    }
    sort(b,b+n,greater<pp>());
    int k=b[0].second;
    for(i=0;i<n;i++)
    {
        if((i+1)==k)
            cout<<((w-a[i].first)*b[1].first)<<' ';
        else
            cout<<((w-a[i].first)*b[0].first)<<' ';
    }
}
