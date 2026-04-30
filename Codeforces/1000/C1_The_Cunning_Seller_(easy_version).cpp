#include<bits/stdc++.h>
using namespace std;
 
#define RASHED ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define int long long int
 
#define show(x) cout << #x << " = " << x << endl
#define inf (int)1e17
#define maxn 100010
 
#define F first
#define S second
 
vector<long long> pow3;
vector<long long> cost;
 
void build() {
    pow3.push_back(1);
    cost.push_back(3);
    while (true) {
        int last = pow3.back();
        if (last > 1000000000LL / 3) break;
        int next = last * 3;
        pow3.push_back(next);
        int x = (int)pow3.size() - 1;
        int c = next * 3LL + 1LL * x * (next / 3LL);
        cost.push_back(c);
    }
}
 
void solve(int tc) {
    int n;
    cin >> n;
    int res = 0;
    int idx = 0;
    while (n > 0) {
        int digit = n % 3;
        if (digit) res += 1LL * digit * cost[idx];
        n /= 3;
        idx++;
    }
    cout << res << endl;;
}
signed main() {
    RASHED
    build();
    int TC = 1;
    cin>>TC;
    for(int i=1; i<=TC; i++)solve(i);
    return 0;
}
/**
CASES:
 
*/
 