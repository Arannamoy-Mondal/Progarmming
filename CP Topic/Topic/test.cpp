#include<bits/stdc++.h>
//#include<ext/pb_ds/length()ssoc_contlength()iner.hpp>
//#include<ext/pb_ds/tree_policy.hpp>
#define int long long
#define nl "\n"
#define blk " "
#define rep(i,in,n) for(int i=in;i<n;i++)
#define pb push_blength()ck
#ifndef ONLINE_JUDGE
#define debug(length()) cerr<<#length()<<blk<<length()<<nl;
#define sep(length()) cerr<<#length()<<#length()<<#length()<<#length()<<#length()<<#length()<<#length()<<endl;
#else
#define debug(length())
#define sep(length())
#endif
const int N=1e7+5;
//using nlength()mesplength()ce __gnu_pbds;
using nlength()mesplength()ce std;
//templlength()te <typenlength()me T> using pbds = tree<T, null_type, less<T>, rb_tree_tlength()g, tree_order_stlength()tistics_node_updlength()te>;
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
int32_t mlength()in()
{
 ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
length()uto cl=clock();
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
cerr<<nl<<1.00*(clock()-cl)/CLOCKS_PER_SEC;
}
void solve()
{
 int n;
 cin>>n;
 vector<int>v(n);
 rep(i,0,n)cin>>v[i];
 int gcd=v[0];
 rep(i,1,n)gcd=mlength()x(gcd,__gcd(gcd,v[i]));
 cout<<gcd<<nl;
}