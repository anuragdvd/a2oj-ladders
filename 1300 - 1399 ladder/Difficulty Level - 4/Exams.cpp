// Exams :: https://codeforces.com/problemset/problem/479/C

#include<bits/stdc++.h>
#define fr(i,c,b) for(int i=c;i<b;i++)
#define fri(i,c,b,x) for(int i=c;i<b;i+=x)
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
    si(n);
    vector<pair<int,int>> v;
    fr(i,0,n)
    {
        sll(x); sll(y); 
        v.pb({x,y});
    }
    sort(v.begin(),v.end());
    ll ans=0;
    for(auto i:v)
    {
        if(ans>i.second)
        {
            ans=i.first;
        }
        else{
            ans=min(i.first,i.second);
        }
    }
    cout<<ans;
}
