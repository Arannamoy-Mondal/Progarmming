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
void check(int x)
{
  int tmp=sqrtl(x);
  if(x==1)
  {
    cout<<"NO"<<nl;
    return;
  }
  if(x== tmp*tmp)
  {
    int flag=1;
    for(int i=2;(i*i) <=tmp;i++)
    {
      if(tmp%i ==0)
      {
        flag=0;
        break;
      }
    }
    if(flag)cout<<"YES"<<nl;
    else cout<<"NO"<<nl;
    return;
  }
  cout<<"NO"<<nl;
}
int32_t main()
{
 ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
 int ts=1;
 //cin>>ts;
 rep(Testcase_,1,ts+1)
 {
    debug(Testcase_)
    solve();
 }
}
void solve()
{
  int n;
  cin>>n;
  int a[n];
  rep(i,0,n)cin>>a[i];
  rep(i,0,n)
  {
    check(a[i]);
  }

}