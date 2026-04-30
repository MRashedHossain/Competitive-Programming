#include<bits/stdc++.h>
using namespace std;
 
#define RASHED ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define int long long int
 
#define show(x) cout << #x << " = " << x << endl
#define inf (int)1e17
#define maxn 100010
 
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define sz(x) ((int)(x).size())
 
#define F first
#define S second
 
void solve(int tc) {
    int n;
    cin>>n;
    vector<int> v(n),f(n+2,0);
    for(int i=0;i<n;i++){
        cin>>v[i];
        f[v[i]] = i;
    }
    int l = -1,r = -1,need = n;
    for(int i=0; i<n; i++) {
        if(v[i] != need) {
            l = i;
            break;
        } else need--;
    }
    if(l == -1) {
        for(int &i:v)cout<<i<<" ";
        cout<<endl;
        return;
    }
    r = f[need];
    if(l < r){
            reverse(v.begin()+l,v.begin()+r+1);
    for(int &i:v)cout<<i<<" ";
    cout<<endl;
    }else {
                for(int &i:v)cout<<i<<" ";
        cout<<endl;
        return;
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
 
 