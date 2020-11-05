// Playing Cubes :: https://codeforces.com/problemset/problem/257/B

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
    si(r); si(b);
    int t1=r; int t2=b;
    string s="B"; b--;
    bool flag=false;
    while(r!=0||b!=0)
    {
        int i=s.length();
       
        if(r==0)
        {
            s+='B'; b--;
        }
        else if(b==0)
        {
            s+='R'; r--;
        }
        else
        {
        if(s[i-1]=='R'&&flag)
        {
            s+='R';
            r--;
        }
        if(s[i-1]=='B'&&flag)
        {
            s+='B';
            b--;
        }
        if(s[i-1]=='R'&&!flag)
        {
            s+='B';
            b--;
        }
        if(s[i-1]=='B'&&!flag)
        {
            s+='R';
            r--;
        }
        }
        flag=!flag;

    }
    
    int c1=0;
    int c2=0;
    fr(i,0,s.length()-1)
    {
        if(s[i]==s[i+1])    c1++;
        else    c2++;
    }
    
    
    
    s="R";
    r=t1; b=t2; r--;
    flag=false;
    while(r!=0||b!=0)
    {
        int i=s.length();
       
        if(r==0)
        {
            s+='B'; b--;
        }
        else if(b==0)
        {
            s+='R'; r--;
        }
        else
        {
        if(s[i-1]=='R'&&flag)
        {
            s+='R';
            r--;
        }
        if(s[i-1]=='B'&&flag)
        {
            s+='B';
            b--;
        }
        if(s[i-1]=='R'&&!flag)
        {
            s+='B';
            b--;
        }
        if(s[i-1]=='B'&&!flag)
        {
            s+='R';
            r--;
        }
        }
        flag=!flag;

    }
    
    int c3=0;
    int c4=0;
    
    fr(i,0,s.length()-1)
    {
        if(s[i]==s[i+1])    c3++;
        else    c4++;
    }
    
    
    
    
    if(c1>c3)   cout<<c1<<" "<<c2;
    else    cout<<c3<<" "<<c4;
    
}