#include<iostream>
#include<cstdio>
using namespace std;

int main ()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,k;
        scanf("%d %d",&n,&k);
        string s;
        cin>>s;
        int res(0),i,j;
        int left,right,len;
        for (int i = 0; i < n;)
        {
            j = i + 1;

            for (; j < n && s[j] != '1'; j++);

            left = s[i] == '1' ? k : 0;
            right = j < n && s[j] == '1' ? k : 0;
            len = j - i;

            if (left == k)
            {
                len--;
            }

            len -= left + right;

            if (len > 0)
            {
                res += (len + k) / (k + 1);
            }

            i = j;
        }

        printf("%d\n",res);
    }

    return 0;
}
