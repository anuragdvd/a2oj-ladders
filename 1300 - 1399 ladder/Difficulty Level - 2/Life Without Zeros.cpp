// Life Without Zeros :: https://codeforces.com/problemset/problem/75/A

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
   sll(a);
   sll(b);
   ll c=a+b;
   ll k=0;
   ll newa=0;
   while(a>0)
   {
       ll rem=a%10;
       if(rem!=0)
       {
           newa+=pow(10,k++)*rem;
       }
       a/=10;
   }
   
   ll newb=0;
   k=0;
   while(b>0)
   {
       ll rem=b%10;
       if(rem!=0)
       {
           newb+=pow(10,k++)*rem;
       }
       b/=10;
   }

   ll newc=0;
   k=0;
   while(c>0)
   {
       ll rem=c%10;
       if(rem!=0)
       {
           newc+=pow(10,k++)*rem;
       }
       c/=10;
   }
   
   if(newa+newb==newc)
   {
       cout<<"YES";
   }
   else
   {
       cout<<"NO";
   }

}