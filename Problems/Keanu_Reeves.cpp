#include<bits/stdc++.h>
#define int long long
#define nl "\n"
#define blk " "
#define ffor(i,in,n) for(int i=in;i<n;i++)
#define rfor(i,in,n) for(int i=n-1;i>=in;i--)
#define pb push_back
#ifndef ONLINE_JUDGE
#define debug(a) cout<<#a<<blk<<a<<nl;
#define sep(a) cout<<#a<<#a<<#a<<#a<<#a<<#a<<#a<<endl;
#else
#define debug(a)
#define sep(a)
#endif
const int N=1e5+5;
using namespace std;
int power(int x,int y)
{
    int res=1;
    while(y)
    {
        if(y&1)
        {
            res*=x;
            //res%=N;
        }
        x*=x;
        y>>=1;
    }
    return res;
}
void solve();
int32_t main()
{
 ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
 int ts=1;
 //cin>>ts;
 while(ts--)
 {
    solve();
 }
}
void solve()
{
  int n;
  cin>>n;
  string s;
  cin>>s;
  int cnt1=0,cnt0=0;
  for(auto it:s)if(it=='1')cnt1++;
  cnt0=n-cnt1;
  if(cnt1==cnt0)
  {
    int c1=0,c0=0,p=0;
    ffor(i,0,n)
    {
        if(s[i]=='1')c1++;
        else c0++;
        if(n-c0 != n-c1)
        {
            p=i;
            break;
        }
    }
  cout<<min(n,(int)2)<<nl;
  ffor(i,0,p+1)cout<<s[i];
  cout<<blk;
  ffor(i,p+1,n)cout<<s[i];
  cout<<nl;
  return;
  }
  cout<<1<<nl;
  cout<<s<<nl;
}