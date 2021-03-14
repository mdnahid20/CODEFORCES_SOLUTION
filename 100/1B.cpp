#include<bits/stdc++.h>
#define fornt(k,n) for(int i=k; i<n; ++i)
#define fornt2(p,n) for(int i2=p; i2<n; ++i2)
#define fornt3(p,n) for(int i3=p; i3<n; ++i3)
#define pb push_back
#define ll long long
#define prY printf("YES\n")
#define prN printf("NO\n")
#define pry printf("yes\n")
#define prn printf("no\n")
using namespace std;

int main ()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n;
    char ch[20];
    scanf("%d", &n);
    while (n--)
    {
        scanf("%s", ch);
        size_t m = strlen(ch);
        size_t C = 1;
        while (C < m && isdigit(ch[C]))
        {
            ++C;
        }

        if (C > 1 && C < m)
        {
            int col(0);
            for (size_t i = C + 1; i < m; ++i)
            {
                col = col * 10 + (ch[i] - '0');
            }

            int pow(26);
            while (col > pow)
            {
                col -= pow;
                pow *= 26;
            }

            col -= 1;
            while (pow != 1)
            {
                pow /= 26;
                printf("%c", col / pow + 'A');
                col %= pow;
            }

            ch[C] = 0;
            printf("%s\n", ch + 1);
        }
        else
        {
            int col(0), val(0), pow = (1);
            size_t i = 0;
            while (isalpha(ch[i]))
            {
                col += pow;
                pow *= 26;
                val = val * 26 + ch[i] - 'A';
                i += 1;
            }
            col += val;
            printf("R%sC%d\n", ch + i, col);
        }
    }
    return 0;
}
