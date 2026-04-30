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
 
#define M 1000000007
 
void solve(int tc) {
    int n;cin>>n;
    vector<int> a(n),b(n),res(n);
    for(int i=0;i<n;i++)cin>>a[i];
    for(int i=0;i<n;i++)cin>>b[i];
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());
    for(int i=0;i<n;i++){
        int lo = 0,hi = n-1,pos = -1;
        while(lo<=hi){
            int mid = (lo+hi)/2;
            if(b[mid]>=a[i])hi = mid-1;
            else{
                 lo = mid+1;
                 pos = mid;
            }
        }
        res[i] = pos+1;
    }
    int pre = 0;
    for(int i=0;i<n;i++){
        res[i] = res[i] - pre;
        pre++;
    }
//    for(int i=0;i<n;i++)cout<<res[i]<<" ";
//    cout<<endl;
    int ans = 1;
    for(int i=0;i<n;i++) ans = (ans*res[i])%M;
    cout<<(ans>0?ans:0)<<endl;
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