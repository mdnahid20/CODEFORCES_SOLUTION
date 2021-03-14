#include<iostream>
#include<cstdio>
#include<string>
using namespace std;


int main ()
{
    int n,k,i(1);
    scanf("%d %d",&n,&k);
    string s;
    cin>>s;
    if(n==1 && k==1)
    {
    cout<<"0"<<endl;return 0;}
    if(k && s[0]!='1')
    {
        s[0]='1';
        --k;
    }
    k=min(k,n-1);
    for(i=1; i<n; i++)
    {
        if(!k)break;

        if(s[i]!='0')
            s[i]='0',k--;
    }
    cout<<s<<endl;
}
