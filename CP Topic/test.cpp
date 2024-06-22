#include<bits/stdc++.h>
const int N=1e7+5;
using namespace std;
bitset<N>isprime;
vector<int>prime;
void sieve(){
    for(int i=3;i<=N;i+=2)isprime[i]=1;
    for(int i=3;i*i<=N;i+=2){
        if(isprime[i])for(int j=i*i;j<=N;j+=i)isprime[j]=0;
    }
    prime.push_back(2);
    isprime[2]=1;
    for(int i=3;i<=N;i+=2)prime.push_back(i);
}
int32_t main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    #endif
        sieve();
        int n;
        cin>>n;
        if(n==2 || n==3){
            cout<<1<<endl;
            cout<<n<<endl;
            return 0;
        }
        int sum=0;
        vector<int>ans;
        for(auto it:prime){
            if(it>n)break;
            bool flag=0;
            while(it<=n){
                ans.push_back(it);
                n-=it;
                if(n==2 || n==3){
                    ans.push_back(n);
                    flag=1;
                    break;
                }
            }
            if(flag)break;
        }
        cout<<ans.size()<<"\n";
        for(auto it:ans)cout<<it<<" ";
}