#include<bits/stdc++.h>
using namespace std;

const int N = 5e4 + 9, mod = 1e9 + 7;

bool is_prime[N];
int spf[N];
vector<int> primes;
void sieve() {
  is_prime[1] = false;
  for (int i = 2; i < N; i++) {
    is_prime[i] = true;
  }
  for (int i = 2; i < N; i++) {
    if (is_prime[i]) {
      for (int j = i + i; j < N; j += i) {
        is_prime[j] = false;
      }
    }
  }
  for (int i = 2; i < N; i++) {
    if (is_prime[i]) {
      primes.push_back(i);
    }
  }
  for (int i = 2; i < N; i++) {
    spf[i] = i;
  }
  for (int i = 2; i < N; i++) {
    if (spf[i] == i) {
      for (int j = i; j < N; j += i) {
        spf[j] = min(spf[j], i);
      }
    }
  }
}
int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  freopen("input.txt","w",stdout);
  auto cl=clock();
  sieve();
  int t=50000; //cin >> t;
  while (t--) {
    int n=t; //cin >> n;
    int number_of_divisors = 1;
    // for (auto p: primes) {
    //   if (p > n) break;
    //   int e = 0;
    //   for (int i = p; i <= n; i += p) {
    //     int x = i;
    //     while (x % p == 0) {
    //       e++;
    //       x /= p;
    //     }
    //   }
    //   number_of_divisors = 1LL * number_of_divisors * (e + 1) % mod;
    // }
    vector<int> cnt(n + 1, 0);
    for (int i = 1; i <= n; i++) {
      int x = i;
      while (x > 1) {
        int k = spf[x];
        cnt[k]++;
        x /= k;
      }
    }
    for (auto e: cnt) {
      number_of_divisors = 1LL * number_of_divisors * (e + 1) % mod;
    }

    cout << number_of_divisors << '\n';
    cerr<<number_of_divisors<<"\n";
  }
  cerr<<1.00*(clock()-cl)/CLOCKS_PER_SEC;
  return 0;
}