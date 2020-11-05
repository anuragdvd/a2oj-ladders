// Beautiful Year ::  https://codeforces.com/problemset/problem/271/A

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
 
bool check(int i)
{
    set<int> s;
    while(i!=0)
    {
        s.insert(i%10); i/=10;
    }
    return s.size()==4?true:false;
}
 
int main()
{
    si(n);
    fr(i,n+1,90001)
    {
        if(check(i))
        {
            cout<<i; break;
        }
    }
}
        
