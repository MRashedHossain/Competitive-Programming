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
int query(int l,int r) {
    int n = r-l+1;
    cout<<"? "<<n<<" ";
    for(int i=l; i<=r; i++)cout<<i<<" ";
    cout<<endl;
    cout.flush();
    int res;
    cin>>res;
    return res;
}
void solve(int tc) {
    int n;
    cin>>n;
    vector<int> ps(n+2,0);
    for(int i=1; i<=n; i++) {
        int x;
        cin>>x;
        ps[i] = ps[i-1]+x;
    }
    int lo = 1,hi = n;
    while(lo <= hi) {
        int mid = (lo+hi)/2;
        int bam = ps[mid] - ps[lo-1],dan = ps[n] - ps[mid];
        int got = query(lo,mid);
        if(got > bam)hi = mid-1;
        else lo = mid+1;
    }
    cout<<"! "<<lo<<endl;
    cout.flush();
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
1 2 3 4  5
1 3 6 10 15
*/