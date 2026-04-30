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
 
void solve(int tc) {
    int k;cin>>k;
    vector<int> v(k),f(k+2,0);
    for(int i=0;i<k;i++){
        cin>>v[i];f[v[i]]++;
    }
    int NN = k-2;
    for(int i=1;i*i<=NN;i++){
        if(NN%i == 0){
            int n = i,m = NN/i;
            if(f[n]>0 && f[m]>0){
                cout<<n<<" "<<m<<endl;
                return;
            }
        }
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
 