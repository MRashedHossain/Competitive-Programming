#include<bits/stdc++.h>
using namespace std;

#define endl "\n"
#define RASHED ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define show(x) cout << #x << " = " << x << endl
#define int long long int

int BS(int a[],int n,int l,int u) {
    int lo = l,hi = n,val = INT_MIN,pos = 0;
    l--;
    while(lo <= hi) {
        int mid = (lo+hi)/2;
        int took = a[mid]-a[l];
        if(took == u) {
            if(val == u)pos = min(pos,mid);
            else pos = mid;
            val = u;
            hi = mid-1;
        } else if(took > u) {
            took = u+(u+1-took);
            if(took > val) {
                pos = mid;
                val = took;
            }
            hi = mid-1;
        } else {
            if(took == val)pos = min(pos,mid);
            else if(took > val) {
                pos = mid;
                val = took;
            }
            lo = mid+1;
        }
    }
    return pos;
}
void solve() {
    int n;
    cin>>n;
    int a[n+4] = {0};
    for(int i=1; i<=n; i++) {
        cin>>a[i];
        a[i]+=a[i-1];
    }
    int q;
    cin>>q;
    while(q--) {
        int l,u;
        cin>>l>>u;
        cout<<BS(a,n,l,u)<<" ";
    }
    cout<<endl;
}
signed main() {
    RASHED
    int tc;
    cin>>tc;
    while(tc--)solve();
    return 0;
}
/**
1
6
3 1 4 1 5 9
1
5 9
*/


