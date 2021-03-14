#include<iostream>
#include<cstdio>
#include<vector>
#include<numeric>
typedef long long ll;
using namespace std;
#define sc(x,y) scanf("%lld %lld",&x,&y)
#define sic(x) scanf("%d",&x)
#define forn(i, n) for (int i = 0; i < int(n); i++)

int main() {
    int q;
    sic(q);
    forn(i, q) {
        ll n, m;
        sc(n,m);
        n = n / m;
        vector<int> digits(10);
        forn(i, 10)
          {
              digits[i] = ((i + 1) * m) % 10;
          }
        long long sum = 0;
        forn(i, n % 10)
           {
             sum += digits[i];
           }
        cout << sum + n / 10 * accumulate(digits.begin(), digits.end(), 0LL) << endl;
    }
}
