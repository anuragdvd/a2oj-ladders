// Chess Cheater :: https://codeforces.com/problemset/problem/1427/B

#include<bits/stdc++.h>
#define fr(i,c,b) for(int i=c;i<b;i++)
#define fro(i,c,b) for(int i=b;i>=c;i--)
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
    si(t);
    while(t--)
    {
        si(n); si(k);
        string s; 
        cin>>s;
        int c=0;
        vector<pair<ll,pair<ll,ll>>> gaps;
        int ans=0;
        
        int pre=0;
        fr(i,0,n)
        {
            
            if(s[i]=='L')
            {
                c++;
            }
            else {
                if(c!=0)
                {
                    if(s[pre]=='W'&&s[i]=='W')
                        gaps.pb({-100000+c,{pre,i}});
                    else
                        gaps.pb({c,{pre,i}});
                }
                c=0;
                pre=i;
            }
        }
        if(c!=0)
            gaps.pb({c,{pre,n-1}});
        sort(gaps.begin(),gaps.end());
        for(auto i:gaps)
        {
         
            
            if(k==0)    break;
            if(s[i.second.second]=='L')
            {
            fr(r,i.second.first,i.second.second+1)  
            {  
                if(s[r]=='L') 
                { 
                    s[r]='W'; 
                    k--; 
                } 
                    if(k==0)    break;
            }
            }
            else{
              fro(r,i.second.first,i.second.second)  
                {  
                if(s[r]=='L') 
                { 
                    s[r]='W'; 
                    k--; 
                } 
                    if(k==0)    break;
                }  
            }
            if(k==0)    break;
        }
        
        
        if(s[0]=='W')   ans=1;
        fr(i,1,n)
        {
            if(s[i]=='L')   continue;
            if(s[i]=='W'&&s[i-1]=='W')   ans+=2;
            else if(s[i]=='W')  ans++;
        }
        
        
        
        cout<<ans<<endl;
    }
}