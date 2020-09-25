// 276C - Little Girl and Maximum Sum :: https://codeforces.com/problemset/problem/276/C


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

bool comp(pair<ll,ll> p1, pair<ll,ll> p2)
{
    if(p1.second>p2.second) return true;
    else    return false;
}

ll temp[200000+1];
ll segtree[800000+1];

void build(int si, int ss, int se)
{
    if(ss==se)
    {    segtree[si]=temp[ss]; return; }
    int mid=(ss+se)/2;
    build(2*si,ss,mid);
    build(2*si+1,mid+1,se);
    segtree[si]=segtree[2*si+1]+segtree[2*si];
}

ll sgquery(int si,int ss,int se,int qs,int qe)
{
    if(qs>se||qe<ss)    return 0; //outside
    if(ss>=qs&&se<=qe)  return segtree[si];
    
    ll mid=(ss+se)/2;
    ll l=sgquery(2*si,ss,mid,qs,qe);
    ll r=sgquery(2*si+1,mid+1,se,qs,qe);
    return l+r;
}


int main()
{
    sll(n); sll(q);
    ll a[n]; fr(i,0,n)  cin>>a[i];
    vector<pair<ll,ll>> b;
    for(int i=0;i<=n+1;i++)
    {
        b.pb({i,0});
    }

    vector<pair<ll,ll>> query;
    while(q--)
    {
        sll(l); sll(r);
        query.pb({l,r});
        b[l].second+=1;
        b[r+1].second-=1;
    }
    fr(i,1,n+1)
    {
        b[i].second=b[i].second+b[i-1].second;
        
    }   
    sort(b.begin(),b.end(),comp);
    sort(a,a+n);
    
    for(int i=n-1,j=0;i>=0;i--,j++)
    {
        temp[b[j].first]=a[i];
    }
    
    build(1,1,n);
    ll sum=0;
    for(auto i:query)
    {
        sum+=sgquery(1,1,n,i.first,i.second);
    }
    cout<<sum;
    
}
