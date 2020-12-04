// Xenia and Divisors :: https://codeforces.com/problemset/problem/342/A

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
    // 1 2 3 4 5 6 7 
    // valid groups : 1 2 4 , 1 2 6 , 1 3 6 
    
    si(n);
    ll a[n];
    fr(i,0,n)   cin>>a[i];
    
    vector<pair<pair<int,int>,int>> ans; 
    map<int,int> mp;
    for(auto i:a)   mp[i]++;
    
    while(mp[1]>0&&mp[2]>0&&mp[4]>0)
    {
        ans.pb({{1,2},4}); mp[1]--; mp[2]--; mp[4]--;
    }
    
    while(mp[1]>0&&mp[2]>0&&mp[6]>0)
    {
        ans.pb({{1,2},6}); mp[1]--; mp[2]--; mp[6]--;
    }    
    
    while(mp[1]>0&&mp[3]>0&&mp[6]>0)
    {
        ans.pb({{1,3},6}); mp[1]--; mp[3]--; mp[6]--;
    }    
    
    bool flag=true;
    
    for(auto i:mp)
    {
        if(i.second>0)  flag=false;
    }
    
    if(!flag)   cout<<-1;
    else{
        for(auto i:ans)
        {
            cout<<i.first.first<<" "<<i.first.second<<" "<<i.second<<endl;
        }
    }
    
}