#include<bits/stdc++.h>
#define int long long
#define nl "\n"
#define blk " "
#define rep(i,in,n) for(int i=in;i<n;i++)
#define pb push_back
#ifndef ONLINE_JUDGE
#define debug(a) cout<<#a<<blk<<a<<nl;
#define sep(a) cout<<#a<<#a<<#a<<#a<<#a<<#a<<#a<<endl;
#else
#define debug(a)
#define sep(a)
#endif
const int N=1e7+5;
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
  int n,l,r,x;
  cin>>n>>l>>r>>x;
  int a[n];
  rep(i,0,n)cin>>a[i];
  int cnt=0,ncnt=0;
  rep(i,0,1<<n)
  {
    vector<int>v;
    int tmp=0;
    rep(j,0,n)
    {
        (i & 1<<j)?v.pb(1):v.pb(0);
    }
    int mn=INT_MAX,mx=INT_MIN,int1=0;
    rep(k,0,v.size())
    {
        debug(v[k])
        if(v[k]==1)
        {
            tmp+=a[k];
            mx=max(mx,a[k]);
            mn=min(mn,a[k]);
            int1++;
        }
    }
    (int1<2 || mx-mn <x || tmp<l || tmp>r)?ncnt++:cnt++;
  }
  cout<<cnt<<nl;
}
