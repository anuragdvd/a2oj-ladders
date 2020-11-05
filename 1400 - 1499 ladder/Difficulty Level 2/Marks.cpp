// Marks :: https://codeforces.com/problemset/problem/152/A


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
    si(m);
    map<int,pair<int,int>> mp;
    vector<string> ss;
    fr(i,0,n)
    {
        string s; 
        cin>>s;
        ss.pb(s);
        int k=0;
        for(auto j:s)
        {
            if(mp[k].first<=j-'0')
            {
                mp[k].first=j-'0';
                mp[k].second=i;
            }
            k++;
        }
    }
    
    int ans=0;
    fr(i,0,n)
    {
        string curr=ss[i];
        int k=0;
        for(auto i:curr)
        {
            if(mp[k].first==i-'0')
            {    ans++; break; }
            k++;
        }
    }
    cout<<ans;
}