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
 
void solve(int tc) {
    int n,q;
    cin>>n>>q;
    vector<int> one(n+2,0),zero(n+2,0),v(n+2),soman(n+2,0);
    for(int i=1; i<=n; i++) {
        cin>>v[i];
        if(v[i])one[i]++;
        else zero[i]++;
    }
    for(int i=2; i<=n; i++) {
        if(v[i] == v[i-1])soman[i]++;
    }
    for(int i=1; i<=n; i++) {
        one[i] += one[i-1];
        zero[i] += zero[i-1];
        soman[i] += soman[i-1];
    }
    while(q--){
        int l,r;cin>>l>>r;
        if((one[r] - one[l-1])%3 || (zero[r] - zero[l-1])%3)cout<<-1<<endl;
        else {
            if(soman[r] - soman[l] > 0)cout<<(r-l+1)/3<<endl;
            else cout<<2+(r-l-2)/3<<endl;
        }
    }
}
signed main() {
    RASHED
    int TC = 1;
    cin>>TC;
    for(int i=1; i<=TC; i++)solve(i);
    return 0;
}
/**
CASES:
AGAIN
*/
 