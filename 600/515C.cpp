#include<iostream>
#include<string>
#include<algorithm>
#include<map>

using namespace std;

int main ()
{
    int n,i;  string s,s2;
    map<char, string>mp;
    mp['0'] = mp['1'] = "";
    mp['2'] = "2";
    mp['3'] = "3";
    mp['4'] = "223";
    mp['5'] = "5";
    mp['6'] = "35";
    mp['7'] = "7";
    mp['8'] = "2227";
    mp['9'] = "2337";
    cin>>n>>s;
  for(i=0; i< s.size(); ++i)
      s2 += mp[s[i]];

  sort(s2.rbegin() , s2.rend());
  cout<<s2;
}
