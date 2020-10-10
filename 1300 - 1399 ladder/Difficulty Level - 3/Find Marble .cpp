// Find Marble :: https://codeforces.com/problemset/problem/285/B

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
    si(n);
    si(i);
    si(j);
    ll a[n];
    vector<ll> graph[n+1];
    fr(i,0,n)
    {    cin>>a[i]; graph[i+1].pb(a[i]); }
    
    vector<int> d(n+1,-1);
    d[i]=0;
    queue<int> q;
    q.push(i);
    
    while(!q.empty())
    {
        int node=q.front();
        q.pop();
        for(auto k:graph[node])
        {
            if(d[k]==-1)
            {
                d[k]=d[node]+1;
                q.push(k);
            }
        }
    }
    
    cout<<d[j];
    
    
    
}