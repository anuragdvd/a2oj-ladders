// 222A - Shooshuns and Sequence :: http://codeforces.com/problemset/problem/222/A

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

int main()
{
    si(n); si(k);
    ll a[n+1]; fr(i,1,n+1)  cin>>a[i];
    ll c=0;
    map<int,int> mp;
    fr(i,k,n+1)
    {
        mp[a[i]]++;
    }
    if(mp[a[k]]==n-k+1)
    {   for(int i=k;i>=0;i--) 
        { 
            if(a[i]!=a[k]) 
            {  
                cout<<i; 
                break;
            }   
        }      
    }
    else    cout<<-1;   
}