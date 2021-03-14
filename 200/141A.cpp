#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;

int main ()
{
    string s,s1,s2,s3;
    cin>>s;
    cin>>s1;
    cin>>s2;
     s3=s1+s;
     sort(s3.begin(),s3.end());
     sort(s2.begin(),s2.end());
    if(s2==s3){
        printf("YES\n");}
        else{
            printf("NO\n");
        }
}
