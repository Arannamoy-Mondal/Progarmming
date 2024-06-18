/*https://codeforces.com/contest/445/problem/B*/
#include<bits/stdc++.h>
//#include<ext/pb_ds/assoc_container.hpp>
//#include<ext/pb_ds/tree_policy.hpp>
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
//using namespace __gnu_pbds;
using namespace std;
//template <typename T> using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
vector<bool>vis(N);
vector<int> v[N];
void dfs(int t)
{
    if(!vis[t])vis[t]=1;
    for(auto it:v[t])
    {
        if(!vis[it])
        {
            dfs(it);
        }
    }
}
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
#ifndef ONLINE_JUDGE
  freopen("input.txt","r",stdin);
#endif
 int ts=1;
 //cin>>ts;
 rep(t,1,ts+1)
 {
    //debug(t)
    solve();
 }
}
void solve()
{
 int n,m; 
 cin>>n>>m;
 rep(i,0,m)
 {
    int a,b;
    cin>>a>>b;
    v[a].pb(b);
    v[b].pb(a);
 }
 int cnt=0,ans=0;
 for(int i=1;i<=n;i++)
 {
    if(!vis[i])
    {
        dfs(i);
        cnt++;
    }
    ans=max(ans,cnt);
 }
 cout<<(1LL<<(n-cnt))<<nl;
}