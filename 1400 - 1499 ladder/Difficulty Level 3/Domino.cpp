// Domino ::  https://codeforces.com/problemset/problem/353/A

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
    vector<pair<ll,ll>> v;
    ll s1=0; ll s2=0;
    fr(i,0,n)
    {
        si(x); si(y);
        s1+=x;
        s2+=y;
        v.pb({x,y});
    }
    //watch(s1); watch(s2);
    if(s1%2==0&&s2%2==0)
    {
        cout<<"0";
    }
    else{
        if(s1%2==0&&s2%2!=0)
        {
            cout<<-1;
        }
        else if(s1%2!=0&&s2%2==0)
        {
            cout<<-1;
        }
        else{
            bool flag=false;
            //cout<<"A";
            fr(i,0,n)
            {
                //watch(v[i].first); watch(v[i].second);
                if((v[i].first%2==0&&v[i].second%2!=0)||(v[i].first%2!=0&&v[i].second%2==0)) 
                {
                  
                    flag=true; break; 
                    
                } 
            }
            if(flag)    cout<<1;
            else    cout<<-1;
        }
        
    }
}
