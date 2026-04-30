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
    int n;
    cin>>n;
    deque<int> q;
    for(int i=0; i<n; i++) {
        int x;
        cin>>x;
        q.push_back(x);
    }
    string res = "";
    for(int i=0; i<n; i++) {
        if(i%2) {
            int need = min(q.front(),q.back());
            if(need == q.front()) {
                res += 'L';
                q.pop_front();
            } else {
                res += 'R';
                q.pop_back();
            }
        } else {
            int need = max(q.front(),q.back());
            if(need == q.front()) {
                res += 'L';
                q.pop_front();
            } else {
                res += 'R';
                q.pop_back();
            }
        }
    }
    cout<<res<<endl;
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
 
*/
 