#include <iostream>
#include <algorithm>
#define MAXN 100010
#include<string.h>
using namespace std;

typedef pair<int, int> pp;

int n;
pp a[MAXN];

bool cmp(pp a, pp b)
{
    return a.first > b.first;
}

int main()
{
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        a[i].second = i;
        cin >> a[i].first;
    }

    sort(a, a + n, cmp);
    bool b[n];
    memset(b, 0, n*sizeof(b[0]));
    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        int j = i + 1;
        while (b[j] || (j < n && a[j].first == a[i].first))
        {
            j++;
        }
        if (j >= n)
            break;
        b[j] = true;
        cnt++;
    }

    cout << cnt << endl;

    return 0;
}


