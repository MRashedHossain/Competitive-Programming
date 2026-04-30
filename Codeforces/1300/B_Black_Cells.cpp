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
int calcu(vector<int> v,int n){
    sort(v.begin(),v.end());
    int curr = 0;
    for(int i=1;i<n;i+=2){
        curr = max(curr,v[i] - v[i-1]);
    }
    return curr;
}
void solve(int tc) {
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++)cin>>v[i];
    int res = (int)1e18;
    if(n%2){
        for(int i=0;i<n;i++){
            v.push_back(v[i] - 1);
            res = min(res,calcu(v,n+1));
            v.pop_back();
            v.push_back(v[i] + 1);
            res = min(res,calcu(v,n+1));
            v.pop_back();
        }
    }else {
        res = calcu(v,n);
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