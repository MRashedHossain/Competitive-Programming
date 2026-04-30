#include<bits/stdc++.h>
using namespace std;
 
#define RASHED ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define int long long int
 
#define show(x) cout << #x << " = " << x << endl
#define inf (int)1e17
#define maxn 400010
#define NN 7000000
 
#define F first
#define S second
 
vector<int> prime(NN,0),ps(maxn,0),pp;
void seive(){
    for(int i=2;i*i<=NN;i++){
        if(prime[i] == 0){
            for(int j=i+i;j<=NN;j+=i)prime[j]++;
        }
    }
    for(int i=2;i<=NN;i++){
        if(prime[i] == 0)pp.push_back(i);
    }
    for(int i=1;i<=maxn;i++)ps[i] = ps[i-1]+pp[i-1];
}
void solve(int tc) {
    int n;cin>>n;
    vector<int> v(n),cps(n+2,0);
    for(int i=0;i<n;i++)cin>>v[i];
    sort(v.rbegin(),v.rend());
    for(int i=1;i<=n;i++)cps[i] = cps[i-1]+v[i-1];
    int lo =1,hi = n,res = 0;
    while(lo<=hi){
        int mid = (lo+hi)/2;
        if(cps[mid] >= ps[mid]){
            res = mid;
            lo = mid+1;
        }else hi = mid-1;
    }
    int ans = n-res;
    cout<<ans<<endl;
}
signed main() {
    RASHED
    seive();
//    cout<<pp.size()<<endl;
//    return 0;
    int TC = 1;
    cin>>TC;
    for(int i=1; i<=TC; i++)solve(i);
    return 0;
}
/**
CASES:
 
*/