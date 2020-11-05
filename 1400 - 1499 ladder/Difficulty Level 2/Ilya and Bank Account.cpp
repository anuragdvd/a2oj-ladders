// Ilya and Bank Account :: https://codeforces.com/problemset/problem/313/A

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
    sll(n);
    stringstream ss; 
    ss << n; 
    string s = ss.str(); 
    string s1 = s.substr(0,s.length()-1);
    string s2 = s.substr(0,s.length()-2);
    s2=s2+s[s.length()-1];
    
    ll n1=stoi(s1);
    ll n2=stoi(s2);
    cout<<max({n,n1,n2});
}