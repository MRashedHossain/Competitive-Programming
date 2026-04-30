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
 
bool solve(int tc) {
    int n;cin>>n;
    vector<int> a(n),b(n);
    for(int i=0;i<n;i++)cin>>a[i];
    for(int i=0;i<n;i++)cin>>b[i];
    if(a.back() != b.back())return false;
    for(int ii=0;ii<64;ii++){
        for(int i=0;i<n-1;i++){
            if(a[i] != b[i]){
                if((a[i] ^ a[i+1]) == b[i]){
                    a[i] = b[i];
                }
            }
        }
    }
        for(int ii=0;ii<64;ii++){
        for(int i=n-1;i>=0;i--){
            if(a[i] != b[i]){
                if((a[i] ^ a[i+1]) == b[i]){
                    a[i] = b[i];
                }
            }
        }
    }
    for(int i=0;i<n;i++){
        if(a[i] != b[i])return false;
    }
    return true;
}
signed main() {
    RASHED
    int TC = 1;
    cin>>TC;
    for(int i=1; i<=TC; i++)cout<<(solve(i)?"YES":"NO")<<endl;
    return 0;
}
/**
CASES:
 
*/