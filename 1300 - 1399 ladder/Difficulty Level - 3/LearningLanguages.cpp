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

void __print(int x) {cerr << x;}
void __print(long x) {cerr << x;}
void __print(long long x) {cerr << x;}
void __print(unsigned x) {cerr << x;}
void __print(unsigned long x) {cerr << x;}
void __print(unsigned long long x) {cerr << x;}
void __print(float x) {cerr << x;}
void __print(double x) {cerr << x;}
void __print(long double x) {cerr << x;}
void __print(char x) {cerr << '\'' << x << '\'';}
void __print(const char *x) {cerr << '\"' << x << '\"';}
void __print(const string &x) {cerr << '\"' << x << '\"';}
void __print(bool x) {cerr << (x ? "true" : "false");}

template<typename T, typename V>
void __print(const pair<T, V> &x) {cerr << '{'; __print(x.first); cerr << ','; __print(x.second); cerr << '}';}
template<typename T>
void __print(const T &x) {int f = 0; cerr << '{'; for (auto &i: x) cerr << (f++ ? "," : ""), __print(i); cerr << "}";}
void _print() {cerr << "]\n";}
template <typename T, typename... V>
void _print(T t, V... v) {__print(t); if (sizeof...(v)) cerr << ", "; _print(v...);}
#ifndef ONLINE_JUDGE
#define debug(x...) cerr << "[" << #x << "] = ["; _print(x)
#else
#define debug(x...)
#endif


vector<bool> visited(101,false);
vector<ll> graph[101];

void dfs(int curr)
{
    visited[curr]=true;

    for(auto i:graph[curr])
    {
        if(!visited[i])
            dfs(i);
    }
}


int dfsutil(int n)
{
    int ans=-1;
    for(int i=1;i<=n;i++)
    {
        if(!visited[i])
        {
           watch(i);
            ans++;
            dfs(i);
             
        }
    }
    return ans;
}


int main()
{
    freopen ("input.txt","r",stdin); 
    si(n);
    si(m);
    vector<set<ll>> a(n+1);
    fr(i,1,n+1)
    {
        sll(x);
        while(x--)
        {
            a[i].insert(x);
        }
    }


    vector<ll> indegree(n+1,0);
    fr(i,1,n+1)
    {
        for(auto x: a[i])
        {   
            fr(j,i+1,n+1)
            {
                if(a[j].find(x)!=a[j].end())
                {
                    indegree[i]++; indegree[j]++;
                    graph[i].pb(j);
                    graph[j].pb(i);
                }
            }
        }
    }
    

    cout<<dfsutil(n);
    
}