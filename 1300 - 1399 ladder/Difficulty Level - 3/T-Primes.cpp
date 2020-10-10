// T-primes :: https://codeforces.com/problemset/problem/230/B

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

set<ll> primes;
vector<bool> is_prime(1000001,true);
void pre()
{
    is_prime[0]=false,is_prime[1]=false;
    for(int i=2;i*i<=1000000;i++)
    {
        if(is_prime[i])
        {
            for(int k=i*i;k<=1000000;k+=i)
            {
                is_prime[k]=false;
            }
        }
    }
    for(int i=2;i<=1000000;i++)
        if(is_prime[i])
            primes.insert(i);
    
}

int main()
{
    si(n);
    ll a[n];
    fr(i,0,n)   cin>>a[i];
    // make sure that the square root exists
    // the square root should be a prime number 
    // this is the only case to get 3 divisors 
    // we need to store only prime number upto 10^6
    
    pre();
    fr(i,0,n)
    {
     //   cout<<sqrt(a[i])<<endl;
        if(sqrt(a[i])==ceil(sqrt(a[i])) && primes.find(sqrt(a[i]))!=primes.end()  )
        {
        
            cout<<"YES"; nl;
        }
        
        else{
            cout<<"NO"; nl;
        }
        
    }
    
}