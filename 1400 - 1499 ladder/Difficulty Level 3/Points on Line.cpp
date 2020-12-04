// Points on LIne :: https://codeforces.com/contest/251/problem/A

// Cinema Line ::  https://codeforces.com/problemset/problem/349/A

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

int binomialCoeff(int n, int k) 
{ 
    int C[k+1]; 
    memset(C, 0, sizeof(C)); 
  
    C[0] = 1;  
  
    for (int i = 1; i <= n; i++) 
    { 
        for (int j = min(i, k); j > 0; j--) 
            C[j] = C[j] + C[j-1]; 
    } 
    return C[k]; 
} 

int main()
{
    si(n);
    sll(d);
    ll a[n];
    fr(i,0,n)   cin>>a[i];
    int start=0;
    int end=2;
    ll ans=0;
    while(end<n)
    {
        if(a[end]-a[start]<=d)
        {
            ll sz=end-start;
            ans=ans+(((sz)*(sz-1))/2);
           // watch(ans);
            end++;
        }
        else{
            
            start++;
        }
    }
    //watch(end-start+1);
    cout<<ans;

}