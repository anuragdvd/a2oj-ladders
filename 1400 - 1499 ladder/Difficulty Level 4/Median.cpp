// Median :: https://codeforces.com/problemset/status?my=on

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
    si(x);
    vector<int> s;
    fr(i,0,n) 
    {
        si(y);
        s.pb(y);
    }
    sort(s.begin(),s.end());
    int med;
    int ans=0;
    if(binary_search(s.begin(),s.end(),x))
    {
        med=s[(s.size()-1)/2];
        if(x>med)
        {
            while(med!=x)
            {
                s.pb(1000001);
                sort(s.begin(),s.end());
                med=s[(s.size()-1)/2];
                ans++;
            }
        }
        if(x<med)
        {
            while(med!=x)
            {
                s.pb(1);
                sort(s.begin(),s.end());
                med=s[(s.size()-1)/2];
                ans++;
            }
        }
    }
    else{
        ans++;
        s.pb(x);
        sort(s.begin(),s.end());
         med=s[(s.size()-1)/2];
        if(x>med)
        {
            while(med!=x)
            {
                s.pb(1000001);
                sort(s.begin(),s.end());
                med=s[(s.size()-1)/2];
               // watch(s.size());
            //    watch(med);
                ans++;
            }
        }
        if(x<med)
        {
            while(med!=x)
            {
                s.pb(1);
                sort(s.begin(),s.end());
                med=s[(s.size()-1)/2];
                ans++;
            }
        }
 
    }
    cout<<ans;
}