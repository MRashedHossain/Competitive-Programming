#include<bits/stdc++.h>
using namespace std;
 
#define RASHED ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define int long long int
 
#define show(x) cout << #x << " = " << x << endl
#define inf (int)1e17
#define maxn 100010
#define NN 1e7+5
 
#define F first
#define S second
 
vector<int> prime(NN,0),ps(NN,0),got;
void seive() {
    for(int i=2; i*i<=NN; i++) {
        if(prime[i] == 0) {
            for(int j=i*i; j<=NN; j+=i)prime[j]++;
        }
    }
//    for(int i=1; i<=11; i++)cout<<prime[i]<<" ";
//    cout<<endl;
    for(int i=2; i<=(int)1e7; i++)if(prime[i] == 0)got.push_back(i);
}
void solve(int tc) {
    int n,res = 0;cin>>n;
    for(int i=1;i<=n;i++){
        int lo = 0,hi = got.size()-1,pos = -1;
        while(lo<=hi){
            int mid = (lo+hi)/2;
            int now = got[mid];
            if(now*i <= n)pos = mid,lo = mid+1;
            else hi = mid-1;
        }
        if(pos!=-1)res += (pos+1);
    }
    cout<<res<<endl;
}
signed main() {
    RASHED
    seive();
    int TC = 1;
    cin>>TC;
    for(int i=1; i<=TC; i++)solve(i);
    return 0;
}
/**
CASES:
 
*/