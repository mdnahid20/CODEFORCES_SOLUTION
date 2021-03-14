#include <cstdio>
#include <algorithm>
using namespace std;

int p[1001][1001], row[1001], col[1001];

int main()
{
    int n,m,k;
    int r,c;
    scanf("%d%d%d",&n,&m,&k);

    for (r =1; r <= n; ++r)
        row[r] = r;

    for (c = 1; c <= m; ++c)
        col[c] = c;

    for (r = 1; r <= n; ++r)
        for(c = 1; c <= m; ++c)
            scanf("%d", &p[r][c]);

    while (k--)
    {
        char s[2];
        int x, y;
        scanf("%s%d%d", s, &x, &y);
        switch (s[0])
        {
        case 'r':
            swap(row[x], row[y]);
            break;
        case 'c':
            swap(col[x], col[y]);
            break;
        case 'g':
            printf("%d\n", p[row[x]][col[y]]);
            break;
        default:
            break;
        }
    }
    return 0;
}
