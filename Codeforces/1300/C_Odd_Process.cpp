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
    int n,mxodd = 0;;
    cin>>n;
    vector<int> v(n),even,odd;
    for(int i=0; i<n; i++) {
        cin>>v[i];
        if(v[i]%2)odd.push_back(v[i]);
        else even.push_back(v[i]);
        if(v[i]%2)mxodd = max(mxodd,v[i]);
    }
    if(odd.empty()) {
        for(int i=1; i<=n; i++)cout<<0<<" ";
        cout<<endl;
        return;
    }
    if(even.empty()) {
        for(int i=1; i<=n; i++)cout<<(i%2?mxodd:0)<<" ";
        cout<<endl;
        return;
    }
    sort(odd.rbegin(),odd.rend());
    sort(even.rbegin(),even.rend());
    int o = odd.size(),e = even.size();
    vector<int> preodd(o+2,0),preven(e+2,0);
    for(int i=0; i<o; i++)preodd[i+1] = preodd[i]+odd[i];
    for(int i=0; i<e; i++)preven[i+1] = preven[i]+even[i];
    vector<int> res(n+3,0);
    for(int k=1; k<n; k++) {
        int odd_nisi = 1,even_nisi = k-1;
        if(even_nisi > e) {
            int baki_ase = k - e - 1;
            if(baki_ase%2)res[k] = preodd[odd_nisi]+preven[e-1];
            else res[k] = preodd[odd_nisi]+preven[e];
        } else {
            res[k] = preodd[odd_nisi]+preven[even_nisi];
        }
    }
    if(o%2)res[n] = preodd[1]+preven[e];
    else res[n] = 0;
    for(int i=1; i<=n; i++)cout<<res[i]<<" ";
    cout<<endl;
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
 