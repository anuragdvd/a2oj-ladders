//  Way Too Long Words :: https://codeforces.com/problemset/problem/71/A

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
   si(n);
   vector<string> ans;
   while(n--)
   {
       string s;
       cin>>s;
       if(s.size()<=10) ans.pb(s);
       else
       {
           string temp="";
           temp+=s[0];
           int len=s.length()-2;
           while(len>0)
           {
               temp+=len%10+'0';
               len/=10;
           }
           reverse(temp.begin()+1,temp.end());
           temp+=s[s.length()-1];
           ans.pb(temp);
       }
   }
   for(auto i:ans)
    cout<<i<<endl;
   
   
}