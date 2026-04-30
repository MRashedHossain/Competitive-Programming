#include<bits/stdc++.h>
using namespace std;
 
#define RASHED ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define int long long int
 
#define show(x) cout << #x << " = " << x << endl
#define inf (int)1e18
#define maxn 100010
 
#define F first
#define S second
 
vector<int> two;
 
void twotwo(int n) {
    two.push_back(1);
    int curr = 1;
    while(curr<=n) {
        curr*=2;
        two.push_back(curr);
    }
}
void solve(int tc) {
    int n;
    cin>>n;
    if(n == 6) {
        cout<<"7"<<endl;
        cout<<"1 2 4 6 5 3"<<endl;
        return;
    }
    if(n%2) {
        cout<<n<<endl;
        for(int i=2; i<n-1; i++)cout<<i<<" ";
        cout<<1<<" "<<n-1<<" "<<n<<endl;
    } else {
        int res = 1;
        for(int i=two.size()-1; i>=0; i--) {
            if(two[i]<=n)break;
            res = two[i];
        }
        int fx = res/2;
        cout<<res-1<<endl;
        for(int i=2; i<=n; i++) {
            if(i == fx || i == fx-1 || i == fx-2 || i == 3)continue;
            cout<<i<<" ";
        }
        cout<<3<<" "<<1<<" "<<fx-2<<" "<<fx-1<<" "<<fx<<endl;
    }
}
 
signed main() {
    RASHED
    twotwo(2*maxn);
    int TC = 1;
    cin>>TC;
    for(int i=1; i<=TC; i++)solve(i);
    return 0;
}
/**
CASES:
 
*/
 