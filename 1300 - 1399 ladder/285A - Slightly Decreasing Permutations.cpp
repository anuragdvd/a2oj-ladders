//285A - Slightly Decreasing permutations : https://codeforces.com/problemset/problem/285/As


#include<bits/stdc++.h>
#define fr(i,c,b) for(int i=c;i<b;i++)
#define frl(i,c,b) for(ll i=c;i<b;i++)
#define si(x) int x; scanf("%d", &x)
#define sll(x) ll x; scanf("%lld", &x)
#define pi(x) printf("%d", x)
#define pll(x) printf("%lld", x)
#define nl printf("\n")
#define watch(x) cout << (#x) << " is " << (x) << endl
#define MAX 100001
#define M 1000000007
#define pb push_back

typedef long long int ll;

using namespace std;

int main()
{
    int n;
    cin>>n;
    int k; 
    cin>>k;
    ll a[n];
    fr(i,0,n)
        a[i]=i+1;
    reverse(a,a+k+1);
    for(auto i:a)
        cout<<i<<" ";
}
