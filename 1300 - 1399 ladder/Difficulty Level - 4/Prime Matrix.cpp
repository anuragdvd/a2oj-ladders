// Prime Matrix :: https://codeforces.com/problemset/problem/271/B

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

bool p[300001+1];
set<ll> prime;

void sieve()
{
    memset(p,true,sizeof(p));
    
    for(int i=2; i*i<=110001;i++)
    {
        if(p[i]==true)
        {
        for(int j=i*i;j<=110001;j+=i)
        {
            p[j]=false;   
        }
        }
    }
    
    p[0]=false;
    p[1]=false;
    
    fr(i,2,110001)
        if(p[i])
            prime.insert(i);
    
}



int main()
{
   sieve();
   si(n);
   si(m);
   ll a[n][m];
  
   fr(i,0,n)
   {
       fr(j,0,m)  {    cin>>a[i][j];  }
   }

   int mn=INT_MAX;
   
   fr(i,0,n)
   {
       int val=0;
       fr(j,0,m)
       {
           if(!p[a[i][j]])
            {
            auto it=prime.upper_bound(a[i][j]);
           if(*it>a[i][j])
            val+=*it-a[i][j];            
            }
        }
       mn=min(mn,val);
   }
   
   fr(i,0,m)
   {
       int val=0;
       fr(j,0,n)
       {
           if(!p[a[j][i]])
           {
               auto it=prime.upper_bound(a[j][i]);
               if(*it>a[j][i])
                val+=*it-a[j][i];
           }
       }
       mn=min(mn,val);
   }
   
   cout<<mn;
   
}