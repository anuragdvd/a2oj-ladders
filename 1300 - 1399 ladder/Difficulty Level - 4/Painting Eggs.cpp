// Painting Eggs :: https://codeforces.com/problemset/problem/282/B

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
    si(n);
    ll sum1=0; ll sum2=0;
    bool flag=true;
    string ans="";
    while(n--)
    {
        si(a); si(b);
        if(sum1+a-sum2<=500)
        {
            sum1+=a; ans+='A';
        }
        else if(sum2+b-sum1<=500)
        {
            sum2+=b; ans+='G';
        }
        else{
            flag=false;
        }
    }
    if(flag)    cout<<ans;
    else    cout<<-1;
    
}
