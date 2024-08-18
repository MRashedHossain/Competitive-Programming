#include<bits/stdc++.h>
using namespace std;

#define endl "\n"
#define RASHED ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
///#define show(x) cout << #x << " = " << x << endl
#define int long long int
#define MX 1000000

int ps[MX+8] = {0,0,1};

bool valid(int n) {
    if(n == 2)return true;
    for(int i=2; i<=sqrt(n)+1; i++) {
        if(n%i == 0)return false;
    }
    return true;
}
int DigiSum(int n) {
    int res = 0;
    while(n>0) {
        res+=(n%10);
        n/=10;
    }
    return res;
}
vector<int> SieveOfEratosthenes() {
    bool prime[MX + 1];
    vector<int> pp;
    memset(prime, true, sizeof(prime));
    for (int p = 2; p * p <= MX; p++) {
        if (prime[p] == true) {
            for (int i = p * p; i <= MX; i += p)prime[i] = false;
        }
    }
    for (int p = 2; p <= MX; p++) {
        if(prime[p])pp.push_back(p);
    }
    return pp;
}
void MAKE() {
    vector<int> prime = SieveOfEratosthenes();
//    for(int i=0;i<10;i++)cout<<prime[i]<<" ";
//    cout<<endl;
    vector<bool> mark(MX+2,false);
    for(auto i:prime) {
        if(valid(DigiSum(i)))mark[i] = true;
    }
    for(int i=3; i<=MX; i++) {
        if(mark[i])ps[i] = 1;
        else ps[i] = 0;
    }
    for(int i=1;i<=MX;i++)ps[i] += ps[i-1];
}
void solve() {
    int x,y;scanf("%lld%lld",&x,&y);
    printf("%lld\n",ps[y]-ps[x-1]);
}
signed main() {
    RASHED
    MAKE();
//    for(int i=0;i<20;i++)cout<<ps[i]<<" ";
//    cout<<endl;
    int tc;
    scanf("%lld",&tc);
    while(tc--)solve();
    return 0;
}
/**
CASES:

*/
