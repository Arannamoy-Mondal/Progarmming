#include<bits/stdc++.h>
//#include<ext/pb_ds/assoc_container.hpp>
//#include<ext/pb_ds/tree_policy.hpp>
#define int long long
#define nl "\n"
#define blk " "
#define rep(i,in,n) for(int i=in;i<n;i++)
#define pb push_back
#ifndef ONLINE_JUDGE
#define debug(a) cerr<<#a<<blk<<a<<nl;
#define sep(a) cerr<<#a<<#a<<#a<<#a<<#a<<#a<<#a<<endl;
#else
#define debug(a)
#define sep(a)
#endif
const int N=1e7+5;
//using namespace __gnu_pbds;
using namespace std;
//template <typename T> using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
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
        //x%=N,
        y>>=1;
    }
    return res;
}
void solve();
int32_t main()
{
 ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
auto cl=clock();
#ifndef ONLINE_JUDGE
  freopen("input.txt","r",stdin);
#endif
 int ts=1;
 cin>>ts;
 rep(t,1,ts+1)
 {
    //debug(t)
    solve();
 }
cerr<<nl<<1.00*(clock()-cl)/CLOCKS_PER_SEC;
}
void solve()
{
 int n;
 cin>>n;
 int a[n+3],b[n+3];
 rep(i,0,n)cin>>a[i+3];
 rep(i,0,n)cin>>b[i+3];
 int cnt=-3,pr=-1,nr=-1;
 rep(i,0,n){
      if(a[i+3]==b[i+3] && b[i+3]==-1)nr--;
      if(a[i+3]==b[i+3] && b[i+3]==1)pr++;
    }
    nr++,pr++,cnt+=3;
    int cnta=-1,cntb=-1;
    for(auto i = 0;i<n;i++){
        if(a[i+3]<b[i+3])cntb+=b[i+3];
        if(a[i+3]>b[i+3])cnta+=a[i+3];
      }
      cnta++,cntb++;
      int tmpa=cnta,tmpb=cntb;
      cnta=max(tmpa,tmpb);
      cntb=min(tmpa,tmpb);
      cnt=pr;
      int x=min(cntb-cnta,cnt);
      cnta+=(x*2);
      cnta-=x;
      cnt-=(x*3);
      cnt+=(2*x);
      x=cnt;
      x*=2;
      cnt-=(x/=4);
      cnta+=max(x,cnt);
      cntb+=min(x,cnt);
      tmpa=cnta,tmpb=cntb;
      cnta=max(tmpa,tmpb);
      cntb=min(tmpa,tmpb);
      cnt =nr;
      x = max(cnta-cntb,cnt);
      cntb+=(x*2);
      cntb-=x;
      cnt-=(x*2);
      cnt+=x;
      x=cnt;
      x*=2;
      cnt-=(x/=4);
      cout<<min(cnta+max(x,cnt),cntb+min(x,cnt))<<endl;
}
/*
0
-1
1
1
*/