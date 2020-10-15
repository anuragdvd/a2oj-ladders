// Avoiding Zeroes :: https://codeforces.com/problemset/problem/1427/A

#include<bits/stdc++.h>
#define fr(i,c,b) for(int i=c;i<b;i++)
#define fro(i,c,b) for(int i=c;i>=0;i--)
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
    si(t);
    while(t--)
    {
    si(n);
    ll b[n];
    fr(i,0,n)   cin>>b[i];
    sort(b,b+n,greater<int>());
    ll sum=b[0];
    bool flag=true;
    fr(i,1,n)   sum+=b[i];
    if(sum==0)  flag=false;
    if(!flag)   cout<<"NO"; 
    else{
        cout<<"YES"; nl;
        bool check=false;
        ll sum=b[0];    if(sum==0)  check=true;
        fr(i,1,n) {  sum+=b[i];  if(sum==0)  check=true; }
        if(!check)  fr(i,0,n)   cout<<b[i]<<" ";
        else    fro(i,n-1,0)    cout<<b[i]<<" ";
    }
    nl;
    
    }
}