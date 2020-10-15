// Fixing Typos :: https://codeforces.com/problemset/problem/363/C

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
    string ans=""; ans+=s[0];
    ll c=1;
    ll oldc=0;
    
    fr(i,1,s.length())
    {
        if(s[i]==s[i-1])
        {
           c++; 
        }
        else{
            oldc=min((ll)2,c);
            c=1;
        }
       
        if(oldc!=c)
        {
        if(c>=3)
        {
            continue;
        }
        else{
         
            ans+=s[i];
            
        }
        }
        else if(oldc==c&&c>1)
        {
           c--;  continue;
        }
        else{
            ans+=s[i];
        }

    }
    cout<<ans;
}