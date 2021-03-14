#include<iostream>
#include<cstdio>
#include<cmath>
#include<string>
#define ll long long
#define sc(x) scanf("%d",&x);
#define sc2(x,y) sccanf("%d %d",&x,&y)
#define fornt(i,n) for(i=0; i<n; i++)
using namespace std;

string mas[] = {
        "Sheldon",
        "Leonard",
        "Penny",
        "Rajesh",
        "Howard"
};
int main() {
    int i, n;
    sc(n);
    n--;
    while (n >= 5) {
        n = n - 5;
        n = n / 2;
    }
    cout << mas[n] << endl;
}

