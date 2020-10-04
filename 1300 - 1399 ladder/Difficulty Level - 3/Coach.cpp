// 300B - Coach	:: https://codeforces.com/problemset/status?my=on

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

vector<ll> graph[49];
vector<ll> con(49,0);
vector<ll> visited(49,false);
vector<ll> one; 
vector<pair<ll,ll>> two;
vector<pair<pair<ll,ll>,ll>> three;

vector<ll> temp; 

int dfs(int src,int &c)
{
    visited[src]=true;
    for(auto i:graph[src])
    {
        if(!visited[i])
        {
           dfs(i,c); temp.pb(i);
            c++; 
        }
    }
    return c;
}

void dfsutil(int n)
{
    fr(i,1,n+1)
    {
        int c=1;
        if(!visited[i])
        {
            c=dfs(i,c);
            temp.pb(i);
        
       
        con[c]++;
        if(c==1)
        {
            one.pb(i);
        }
        if(c==2)
        {
            two.pb({temp[0],temp[1]});
        }
        if(c==3)
        {
            three.pb({{temp[0],temp[1]},temp[2]});
        }
        }
        temp.clear();
    }
}

int main()
{
   // freopen ("input.txt","r",stdin); 
    si(n);
    si(m);
   
    while(m--)
    {
        si(x); si(y); graph[x].pb(y); graph[y].pb(x);
    }

    bool flag=true;
    dfsutil(n);
    fr(i,4,49)
    {
        if(con[i]>0)
        {
            flag=false;
        }
    }
   // watch(one.size());
//    watch(two.size());
  //  watch(three.size());
    if(!flag||(two.size()>one.size()))
    {
        cout<<-1;
    }
    else{
        for(auto i:three)
        {
            cout<<i.first.first<<" "<<i.first.second<<" "<<i.second<<endl;
        }
        
        int i=0,j=0;
        
        for(;i<two.size();i++)
        {
            cout<<two[i].first<<" "<<two[i].second<<" "<<one[j++];
            nl;
        }
        
        for(;j<one.size();j+=3)
            cout<<one[j]<<" "<<one[j+1]<<" "<<one[j+2]<<endl; 
        
        
        

    }

}