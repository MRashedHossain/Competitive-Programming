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
 
map<int,bool> f;
bool check(int n){
    int sum = (n*(n+1))/2;
    int sq = sqrt(sum);
    return (sq*sq == sum);
}
bool sq(int n){
    int s = sqrt(n);
    return (s*s == n);
}
void build(int n){
    int sum = 0;
    for(int i=1;i<=n;i++){
        sum+=i;
        if(sq(sum))f[i] = true;
    }
}
void solve(int tc) {
     int n;cin>>n;
     if(check(n)){
        cout<<"-1"<<endl;
        return;
     }
     vector<int> res;
     for(int i=1;i<=n;i++)res.push_back(i);
     int now = 0;
     for(int i=0;i<n;i++){
        if(f[res[i]]){
            swap(res[i],res[i+1]);
            i++;
        }
     }
     for(auto i:res)cout<<i<<" ";
     cout<<endl;
}
signed main() {
    RASHED
    build(500001);
    int TC = 1;
    cin>>TC;
    for(int i=1; i<=TC; i++)solve(i);
    return 0;
}
/**
CASES:
 
*/