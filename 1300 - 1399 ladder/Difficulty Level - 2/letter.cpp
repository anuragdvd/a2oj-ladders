// 43B - Letter	

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
    string t;   
    getline(cin,s);
    getline(cin,t);
    map<char,int> mp;
    bool flag=true;
    for(auto i:s)   mp[i]++;
    for(auto i:t) 
    {   
        mp[i]--;
        if(mp[i]==-1&&i!=' ') 
        { 
            flag=false;  
        }
    }
    if(flag)    cout<<"YES";
    else    cout<<"NO";

}