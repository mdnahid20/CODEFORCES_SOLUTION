#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    int last2(0);
	string s;
	cin>>s;
	last2 += s[s.size()-1]-'0';
	last2 += (s[s.size()-2]-'0')*10;
	if(last2%4)
        printf("0\n");
    else
         printf("4\n");
	return 0;
}
