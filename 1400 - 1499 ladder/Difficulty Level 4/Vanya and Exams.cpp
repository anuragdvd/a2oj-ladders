// Vanya and Exams :: https://codeforces.com/problemset/problem/492/C

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
 
bool comp(pair<ll,ll> x, pair<ll,ll> y)
{
    return x.second<y.second;
}

int main()
{
    si(n); sll(r); sll(avg);
    vector<pair<ll,ll>> v;
    ll sum=0;
    fr(i,0,n)
    {
        sll(x); sll(y); 
        sum+=x;
        v.pb({x,y});
    }
    sort(v.begin(),v.end(),comp);
    if(avg*n<=sum)
    {
        cout<<0;
    }
    else
    {
    ll ans=0;
    ll req_score=avg*n;
    ll curr_score=sum;
    fr(i,0,n)
    {
        ll essay_left=r-v[i].first;
     
        
        if(essay_left>=(req_score-curr_score))
        {
            ans+=(req_score-curr_score)*v[i].second; 
            break;
        }
        else{
            ans+=essay_left*v[i].second;
            curr_score=curr_score+essay_left;
        }
    }
    cout<<ans;
    }
}