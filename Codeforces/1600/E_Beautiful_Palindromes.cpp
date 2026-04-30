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
    int n,k;
    cin>>n>>k;
    vector<int> v(n+3),mex(n+3,0);
    vector<int> q;
    for(int i=1; i<=n; i++) {
        cin>>v[i];
        mex[v[i]]++;
    }
    for(int i=1; i<=n; i++) {
        if(mex[i] == 0)q.push_back(i);
    }
    if(q.empty()) {
        for(int i=1; i<=k; i++)cout<<v[i]<<" ";
        cout<<endl;
    } else {
        int x,y,z;
        if(q.size()>=3) {
            x = q[0];
            y = q[1];
            z = q[2];
        } else if(q.size() == 2) {
            x = q[0];
            y = q[1];
            z = v[n];
        } else {
            x = q[0];
            if(n == 3) {
                if(v[1] == v[2] || v[2] == v[3]) {
                    y = v[1];
                    z = v[3];
                } else if(v[1] == v[3]) {
                    y = v[2];
                    z = v[3];
                }
            } else {
                for(int i=n-1;i>=1;i--){
                    if(v[i] != v[n]){
                        y = v[i];
                        break;
                    }
                }
                for(int i=1;i<=n;i++){
                    if(v[i] != y && v[i] != v[n]){
                        z = v[i];
                        break;
                    }
                }
            }
        }
        int bosaisi = 0;
        while(bosaisi < k) {
            if(bosaisi%3 == 0)cout<<x;
            if(bosaisi%3 == 1)cout<<y;
            if(bosaisi%3 == 2)cout<<z;
            cout<<" ";
            bosaisi++;
        }
        cout<<endl;
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
 