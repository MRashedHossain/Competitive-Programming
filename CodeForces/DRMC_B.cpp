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

bool solve(int tc) {
    int n;
    cin>>n;
    int zero = 0,P = 0,N = 0;
    map<int,int> pos,neg;
    for(int i=0; i<n; i++) {
        int x;
        cin>>x;
        if(x == 0){
            zero++;
            continue;
        }
        if (x > 0){
            pos[x]++;
            P++;
        }
        else {
            neg[x]++;
            N++;
        }
    }
    if(zero > 2)return true;
    if(P == 0 || N == 0)return false;
    for(auto i:pos) {
        int tmp = 2*(i.F);
        if(neg[-tmp] && i.S > 1)return true;
        if(zero && neg[-(i.F)])return true;
        for(auto j:pos) {
            if(i.F == j.F)continue;
            int curr = i.F+j.F;
            if(neg[-curr])return true;
        }
    }
    for(auto i:neg) {
        int tmp = 2*(i.F);
        if(pos[-tmp] && i.S > 1)return true;
        for(auto j:neg) {
            if(i.F == j.F)continue;
            int curr = i.F+j.F;
            if(pos[-curr])return true;
        }
    }
    return false;
}
signed main() {
    RASHED
    int TC = 1;
    ///cin>>TC;
    for(int i=1; i<=TC; i++)cout<<(solve(i)?"YES":"NO")<<endl;
    return 0;
}
/**
CASES:

*/
