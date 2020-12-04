// Ice Staking :: https://codeforces.com/problemset/problem/217/A

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

map<pair<int,int>,bool> vis;
vector<pair<int,int>> points;
set<pair<int,int>> s;

void dfs(int x,int y,int n)
{
    vis[{x,y}]=true;
    for(int i=x+1;i<1111;i++)
    {
        if(vis[{i,y}]==true)    break;
        vis[{i,y}]=true;
        if(s.find({i,y})!=s.end())
        {
            dfs(i,y,n);
        }
    }
    for(int i=x-1;i>=0;i--)
    {
        if(vis[{i,y}]==true)    break;
        vis[{i,y}]=true;
        if(s.find({i,y})!=s.end())
        {
            dfs(i,y,n);
        }
    }
     for(int i=y+1;i<1111;i++)
    {
        if(vis[{x,i}]==true)    break;
        vis[{x,i}]=true;
        if(s.find({x,i})!=s.end())
        {
            dfs(x,i,n);
        }
    } 
    for(int i=y-1;i>=0;i--)
    {
        if(vis[{x,i}]==true)    break;
        vis[{x,i}]=true;
        if(s.find({x,i})!=s.end())
        {
            dfs(x,i,n);
        }
    } 
}

int ans(int n)
{
    int c=0;
    fr(i,0,n)
    {
        if(vis[{points[i].first,points[i].second}]==false)
        {
            c++; 
            dfs(points[i].first,points[i].second,n);
        }
    }
    return c;
}
 
int main()
{
    si(n);
    fr(i,0,n)
    {
        si(x); si(y); points.pb({x,y});
        s.insert({x,y});
    }
    fr(i,0,1111)
    {
        fr(j,0,1111)
            vis[{i,j}]=false;
    }
    
    cout<<ans(n)-1;
    
}
