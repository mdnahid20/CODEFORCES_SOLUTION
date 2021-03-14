#include<iostream>
#include<cstdio>
#include<map>
#include<algorithm>
#include<deque>
using namespace std;

int main ()
{
    int n,i;
    string s;
    int a[200001];
    deque<int>dq;
    map<int,int>b;
    scanf("%d",&n);
    for(i=1; i<=n; ++i)
    {
        scanf("%d",&a[i]);
        b[a[i]]=i;
    }
    cin>>s;
    sort(a+1,a+n+1);
    int j(1);
    for(i=0; i<s.size(); ++i)
    {
        if(s[i]-'0')
        {
            int p=dq.back();
            cout<<b[a[p]]<<' ';
            dq.pop_back();
        }
        else
        {
            cout<<b[a[j]]<<' ';
            dq.push_back(j);
            ++j;
        }
    }
}
