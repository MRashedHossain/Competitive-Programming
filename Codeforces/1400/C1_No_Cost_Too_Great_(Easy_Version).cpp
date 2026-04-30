#include<bits/stdc++.h>
using namespace std;
 
#define RASHED ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define int long long int
 
#define show(x) cout << #x << " = " << x << endl
#define inf (int)1e17
#define maxn 200010
 
#define F first
#define S second
 
vector<int> d[maxn];
 
void build() {
    int n = 200001;
    for(int i=1; i<=n; i++) {
        for(int j=i; j<=n; j+=i) {
            d[j].push_back(i);
        }
    }
}
int solve(int tc) {
    int n,b;
    cin>>n;
    vector<int> v(n);
    for(int i=0; i<n; i++)cin>>v[i];
    for(int i=0; i<n; i++)cin>>b;
    sort(v.begin(),v.end());
    map<int,int> f,ff,fff;
    for(int i:v) {
        for(int j:d[i]) {
            f[j]++;
            if(j > 1 && f[j] > 1)return 0;
        }
    }
    for(int i:v) {
        for(int j:d[i+1]) {
            if(j > 1 && ff[j])return 1;
        }
        for(int j:d[i]) {
            ff[j]++;
        }
    }
    for(int i:v) {
        for(int j:d[i]) {
            if(j > 1 && fff[j])return 1;
        }
        for(int j:d[i+1]) {
            fff[j]++;
        }
    }
    return 2;
}
signed main() {
    RASHED
    build();
    int TC = 1;
    cin>>TC;
    for(int i=1; i<=TC; i++)cout<<solve(i)<<endl;
    return 0;
}
/**
CASES:
3
2
5 18
1 1
2
8 9
1 1
2
9 11
1 1
*/