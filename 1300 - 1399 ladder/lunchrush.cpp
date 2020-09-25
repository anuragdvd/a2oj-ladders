// Lunch Rush :: https://codeforces.com/problemset/problem/276/A

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
    si(n); sll(k);
    ll a[n],b[n];
    
    fr(i,0,n)
    {
        cin>>a[i]>>b[i];
        if(b[i]>k)
        {
            a[i]=a[i]-(b[i]-k);
        }
    }
    sort(a,a+n,greater<int>());
    
    cout<<a[0];
    
    
}
