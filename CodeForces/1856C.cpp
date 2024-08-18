#include<bits/stdc++.h>
using namespace std;

#define endl "\n"
#define RASHED ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

///#define int long long int
///#define show(x) cout << #x << " = " << x << endl
///#define maxn 200100

int solve(int tc) {
    int n,k;
    cin>>n>>k;
    vector<int> v,sor;
    for(int i=0; i<n; i++) {
        int x;
        cin>>x;
        v.push_back(x);
        if(x>=mx) {
            mx = x;
            idx = i;
        }
    }
    sor = v;
    int max_move = 0;
    for(int i=n-2;i>=0;i++){
            max_move += sor[i+1]+1-sor[i];
        sor[i] = sor[i+1]+1-sor[i];
    }
}
signed main() {
    RASHED
    int tc;
    cin>>tc;
    while(tc--)cout<<solve(i)<<endl;
    return 0;
}
/**
CASES:

*/
