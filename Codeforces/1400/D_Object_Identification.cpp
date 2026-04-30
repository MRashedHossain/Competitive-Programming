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
int qry(int x,int y) {
    cout<<"? "<<x<<" "<<y<<endl;
    cout.flush();
    int res;
    cin>>res;
    return res;
}
void answer(string res) {
    cout<<"! "<<res<<endl;
    cout.flush();
    return;
}
void solve(int tc) {
    int n;
    cin>>n;
    vector<int> f(n+2,0);
    bool permutation = true;
    for(int i=0; i<n; i++) {
        int x;
        cin>>x;
        f[x] = i+1;
    }
    int x = 1,y = n;
    for(int i=1; i<=n; i++) {
        if(f[i] == 0)permutation = false;
    }
    if(permutation) {
        x = f[1],y = f[n];
        int xx = qry(x,y),yy = qry(y,x);
        if(xx >= n-1 && yy >= n-1 && xx == yy)answer("B");
        else answer("A");
    } else {
        for(int i=1; i<=n; i++) {
            if(f[i] == 0) {
                x = i;
                break;
            }
        }
        for(int i=1; i<=n; i++) {
            if(f[i]) {
                y = i;
                break;
            }
        }
        int ans = qry(x,y);
        if(ans == 0)answer("A");
        else answer("B");
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
 
*/