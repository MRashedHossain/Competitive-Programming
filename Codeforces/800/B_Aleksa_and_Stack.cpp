#include<bits/stdc++.h>
using namespace std;
 
#define endl "\n"
#define FAST ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define show(x) cout << #x << " : " << x << endl
#define ll long long int
#define maxn 100100
 
void clean() {
 
}
void solve() {
    int n;cin>>n;
    vector<int>v;
    for (int i = 1;i<(n*2);i+=2){
        v.push_back(i);
    }
    for (int i = 0;i<n;i++){
        cout<<v[i]<< " ";
    }
    cout<<endl;
}
int main() {
    FAST
    int tc;
    cin>>tc;
    while(tc--){
        solve();
    }
    return 0;
}