// Word ::  http://codeforces.com/problemset/problem/59/A

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
    string s; 
    cin>>s;
    ll c1=0; ll c2=0;
    for(auto i:s)
    {
        if(islower(i))
            c1++;
        else
            c2++;
    }
    
    c1>=c2?transform(s.begin(),s.end(),s.begin(),::tolower):transform(s.begin(),s.end(),s.begin(),::toupper);
    cout<<s;
}
        
