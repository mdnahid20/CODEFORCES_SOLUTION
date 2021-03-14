/*** In the name of Allah(swt), the most gracious, most merciful.***/
/*** Alhamdulillah for Everything ***/

#include<bits/stdc++.h>
#define fornt(i,index,n) for(int i=index;i<n;i++)
#define pb push_back
#define ll long long
#define fastread() (ios_base:: sync_with_stdio(false),cin.tie(NULL));
#define prY printf("YES\n")
#define prN printf("NO\n")
#define pry printf("yes\n")
#define prn printf("no\n")
using namespace std;


int main()
{
    fastread();
	string str;
	int n, k;
	cin >> n >> k;
	cin >> str;
	string s1;
	for (int i = 0; i < n; ++i)
	{
		if (i < k)
		{
			s1 += str[i];
		}
		else
		{
			s1 += s1[i - k];
		}
	}
	if (s1 >= str)
	{
		cout << s1.size() << endl;
		cout << s1 << endl;
		return 0;
	}
	else
	{
		if (str[k - 1] == '9')
		{
			int j = k - 1;
			while (str[j] == '9')
			{
				s1[j] = '0';
				j--;
			}
			s1[j] = str[j] + 1;
		}
		else
		{
			s1[k - 1] = str[k - 1] + 1;
		}
	}
	cout << n << endl;
	for (int i = 0; i < n; ++i)
	{
		cout << s1[i % k];
	}
	cout << endl;
	return 0;
}

