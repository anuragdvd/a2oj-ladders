// 315A - Sereja and Bottles :: https://codeforces.com/problemset/problem/315/A

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

vector<ll> graph[1001];
bool visited[1001];



int main()
{

    si(n);
    ll a[n];
    ll b[n];
    
    memset(visited,false,sizeof(visited));
        
        
    fr(i,0,n)
    {
        cin>>a[i]>>b[i];
    }

    int ans=0;
    
    fr(i,0,n)
    {
        bool flag=false;
        fr(j,0,n)
        {
            if(i==j)    continue;
            if(a[i]==b[j]) flag=true; 
        }
        if(!flag)   ans++;
    }
    
    cout<<ans;

    
    
    
    
}