#include<bits/stdc++.h>
using namespace std;

#define MX 1000000
#define RASHED ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

vector<int> prime_divisors[MX+8];
vector<bool> prime(MX+8,true);

void PRIME_FACTORIZATION() {
    for(int i=2; i<=MX+1; i++) {
        if(prime[i] == false)continue;
        for(int j=i; j<=MX+1; j+=i) {
            prime[j] = false;
            prime_divisors[j].push_back(i);
        }
    }
}
signed main() {
    RASHED
    PRIME_FACTORIZATION();
}
