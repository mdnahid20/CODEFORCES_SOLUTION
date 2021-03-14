#include<bits/stdc++.h>
using namespace std;
#define LL long long
int main()
{
    string a,b;
    cin>>a>>b;
    int na=a.size(),nb=b.size();
    int compare=nb-na+1;
    LL sum=0,ans=0;
    for(int i=0;i<compare;i++)
        if(b[i]=='1')sum++;
    for(int i=0;i<na;i++){
        if(a[i]=='1') ans+=compare-sum;
        else ans+=sum;
        if(b[i]=='1')sum--;
        if(b[i+compare]=='1')sum++;
    }
    cout<<ans<<endl;
}
