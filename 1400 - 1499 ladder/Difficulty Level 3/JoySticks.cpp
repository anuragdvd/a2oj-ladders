// JoySticks :: https://codeforces.com/problemset/problem/651/A

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
#define BLK 548 
 
typedef long long int ll;
 
using namespace std;



int main()
{
    si(n1); si(n2);
    ll t=0;
    while(n1>0 and n2>0)
    {
        if(n1<n2) { n1++; n2-=2; }
        else{ n2++; n1-=2; }
        if(n1>=0 and n2>=0)   t++;
    }
    cout<<t;
    
}