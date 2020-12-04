// LCM Challenge :: https://codeforces.com/contest/235/problem/A

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
    if(n==1)    cout<<1;
    else if(n==2)   cout<<2;
    else if(n==3)   cout<<6;
    else{
        ll ans=INT_MIN;
        for(ll fir=max(0,n-50);fir<=(n-2);fir++)
        {
            for(ll sec=fir+1;sec<=(n-1);sec++)
            {
            for(ll third=sec+1;third<=(n);third++)
            {
            ll curr_lcm=fir;
            curr_lcm=(curr_lcm*sec)/__gcd(curr_lcm,sec);
            curr_lcm=(curr_lcm*third)/__gcd(curr_lcm,third);
            ans=max(ans,curr_lcm);
            }
            }
        }
        cout<<ans;
    }
}