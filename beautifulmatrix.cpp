// Beautiful Matrix :: http://codeforces.com/problemset/problem/263/A

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
    ll a[5][5]; fr(i,0,5)   fr(j,0,5)   cin>>a[i][j];
    
    ll x,y;
    
    fr(i,0,5)   fr(j,0,5)   if(a[i][j]==1)  x=i,y=j;
    
    cout<<abs(x-2)+abs(y-2);
    
}