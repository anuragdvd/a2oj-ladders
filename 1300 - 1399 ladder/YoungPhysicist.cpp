// Young Physicist https://codeforces.com/problemset/problem/69/A

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
    freopen ("input.txt","r",stdin);
    si(n);
    ll a[n][3];
    fr(i,0,n)
    {
        fr(j,0,3)
        {
            cin>>a[i][j];
        }
    }
    vector<int> summ;
    fr(i,0,3)
    {
        int temp=0;
        fr(j,0,n)
        {
            temp+=a[j][i];
        }
        summ.pb(temp);
    }
    ll c=0;
    for(auto i:summ)
    {
        if(i==0)    c++;
    }
    if(c==3)    { cout<<"YES"; }    else {  cout<<"NO";   }
}
