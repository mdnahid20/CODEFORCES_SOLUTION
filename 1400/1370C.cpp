#include<iostream>
#include<cstdio>
typedef long long ll;
using namespace std;
#define sc(x,y) scanf("%d %d",&x,&y)
#define sic(x) scanf("%d",&x)
#define forn(i, n) for (int i = 0; i < int(n); i++)
const int N = 50000;
bool check_prime(int n){
	for(int i = 2; i < min(N, n); i++)
		if(n % i == 0)
			return 0;
	return 1;
}
int main()
{
    int t;
    sic(t);
    while(t--)
    {
		int n;
		sic(n);
		bool lose = (n == 1);
		if(n > 2 && n % 2 == 0){
			if((n & (n - 1)) == 0)
				lose = 1;
			else if(n % 4 != 0 && check_prime(n / 2))
				lose = 1;
		}
        if(!lose)
        {
            printf("Ashishgup\n");
        }
        else
        {
            printf("FastestFinger\n");
        }
    }
}
