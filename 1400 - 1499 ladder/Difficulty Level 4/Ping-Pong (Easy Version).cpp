// Ping-Pong (Easy Version) :: https://codeforces.com/problemset/problem/320/B

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
#define M 4294967296
#define pb push_back
#define BLK 548 
 
typedef long long int ll;
 
using namespace std;

int main()
{
    si(n);
    vector<int> graph[100+1];
    int counter=0;
    vector<pair<int,int>> interval;
    while(n--)
    {
        si(type);
        sll(x); sll(y);
        if(type==1)
        {
            interval.pb({x,y});
            
            
            for(int i=0;i<interval.size();i++)
            {
                for(int j=i+1;j<interval.size();j++)
                {
                    if((interval[j].first<interval[i].first)&&(interval[i].first<interval[j].second))
                    {
                        graph[i].pb(j);
                    }
                    else if((interval[j].first<interval[i].second)&&(interval[i].second<interval[j].second))
                    {
                        graph[i].pb(j);
                    }
                    if((interval[i].first<interval[j].first)&&(interval[j].first<interval[i].second))
                    {
                        graph[j].pb(i);
                    }
                    else if((interval[i].first<interval[j].second)&&(interval[j].second<interval[i].second))
                    {
                        graph[j].pb(i);
                    }
                    
                }
            }
            
            counter++;
            
        }
        else{
            
            vector<bool> visited(counter+1,false);
            x--; y--;
            visited[x]=true;
            
            queue<int> q;
            
            q.push(x);
            
            while(!q.empty())
            {
                int x=q.front();
                q.pop();
                
                for(auto i:graph[x])
                {
                    if(!visited[i])
                    {
                        q.push(i);
                        visited[i]=true;
                    }
                }
            }
            
            if(visited[y])
            {
                cout<<"YES";
            }
            else{
                cout<<"NO";
            }
            nl;
            
          
        }
    }
    
}