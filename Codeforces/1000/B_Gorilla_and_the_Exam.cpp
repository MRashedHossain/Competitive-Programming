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
    int n,k;cin>>n>>k;
    vector<int> a(n);
    map<int,int> f;
    for(int i=0;i<n;i++){
        cin>>a[i];
        f[a[i]]++;
    }
    int res = f.size();
    vector<int> heap;
    for(auto i:f)heap.push_back(i.S);
    sort(heap.begin(),heap.end());
    int nn = heap.size();
    for(int i=0;i<nn-1;i++){
        if(heap[i] <= k)res--,k-=heap[i];
    }
    cout<<max(1LL,res)<<endl;
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