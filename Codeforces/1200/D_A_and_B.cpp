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
 
int solve(int tc) {
    int n;
    string s;
    cin>>n>>s;
    if(n == 1 || n == 2 || n == 3)return 0;
    vector<int> a,b;
    for(int i=0; i<n; i++) {
        if(s[i] == 'a')a.push_back(i);
        else b.push_back(i);
    }
    if (a.empty() || b.empty()) return 0;
    int gapa = 0,gapb = 0;
    for(int i=0; i<b.size()-1; i++) {
        if(abs(b[i] - b[i+1]) > 1)gapb++;
    }
    for(int i=0; i<a.size()-1; i++) {
        if(abs(a[i] - a[i+1]) > 1)gapa++;
    }
//    for(auto i:a)cout<<i<<" ";
//    cout<<endl;
//    for(auto i:b)cout<<i<<" ";
//    cout<<endl;
//    return 0;
    if(!gapa || !gapb)return 0;
    int amid = (a.size()/2),bmid = (b.size()/2);
    int res = 0,curr = 0,ans = inf;
    for(int i=amid-1; i>=0; i--) {
        res += (a[amid] - a[i] - curr-1);
        curr++;
    }
    curr = 0;
    for(int i=amid+1; i<a.size(); i++) {
        res += a[i] - a[amid] - curr-1;
        curr++;
    }
//    show(amid);
//    show(bmid);
//    show(res);
    ans = min(res,ans);
    res = 0;
    curr = 0;
    for(int i=bmid-1; i>=0; i--) {
        res += (b[bmid] - b[i] - curr - 1);
        curr++;
    }
    curr = 0;
    for(int i=bmid+1; i<b.size(); i++) {
        res += b[i] - b[bmid] - curr - 1;
        curr++;
    }
    ans = min(res,ans);
    return ans;
}
signed main() {
    RASHED
    int TC = 1;
    cin>>TC;
    for(int i=1; i<=TC; i++)cout<<solve(i)<<endl;
    return 0;
}
/**
CASES:
 
*/