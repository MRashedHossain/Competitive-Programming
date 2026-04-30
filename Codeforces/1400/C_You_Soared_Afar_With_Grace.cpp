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
    int n;
    cin>>n;
    vector<int> a(n+2),b(n+2),ap(n+2,0),bp(n+2,0),vis(n+2,0);
    for(int i=1; i<=n; i++) {
        cin>>a[i];
        ap[a[i]] = i;
    }
    for(int i=1; i<=n; i++) {
        cin>>b[i];
        bp[b[i]] = i;
    }
    int match = 0,pos = -1;
    for(int i=1; i<=n; i++) {
        if(a[i] == b[i]) {
            match++;
            pos = i;
        }
    }
    if((match > 1) || (match == 1 && n%2 == 0) || (match == 0 && n%2)) {
        cout<<"-1"<<endl;
        return;
    }
    vector<pair<int,int>> res;
    if(n%2 && pos != (n+1)/2) {
        int mid = (n+1)/2;
        vis[a[pos]]++;
        res.push_back({pos,mid});
        swap(a[pos],a[mid]);
        swap(b[pos],b[mid]);
        swap(ap[a[pos]],ap[a[mid]]);
        swap(bp[b[pos]],bp[b[mid]]);
    }
    for(int i=1,j=n; i<=(n/2); i++,j--) {
        if(vis[a[i]])continue;
        if(bp[a[i]] != j) {
            int cp = bp[a[i]];
            //if(cp < j)continue;
            swap(a[cp],a[j]);
            swap(b[cp],b[j]);
            ap[a[cp]] = cp;
            ap[a[j]] = j;
            bp[b[cp]] = cp;
            bp[b[j]] = j;
            res.push_back({cp,j});
        } else vis[a[i]]++;
    }
    for(int i=n,j=1; i>=(n/2); i--,j++) {
        if(vis[a[i]])continue;
        if(bp[a[i]] != j) {
            int cp = bp[a[i]];
            //if(cp > j)continue;
            swap(a[cp],a[j]);
            swap(b[cp],b[j]);
            ap[a[cp]] = cp;
            ap[a[j]] = j;
            bp[b[cp]] = cp;
            bp[b[j]] = j;
            res.push_back({cp,j});
        } else vis[a[i]]++;
    }
//    for(int i=1;i<=n;i++)cout<<a[i]<<" ";
//    cout<<endl;
//    for(int i=1;i<=n;i++)cout<<b[i]<<" ";
//    cout<<endl;
    bool fnd = true;
    for(int i=1,j=n; i<=(n/2); i++,j--) {
        if(a[i] != b[j] || a[j] != b[i]) {
            cout<<"-1"<<endl;
            return;
        }
    }
    cout<<res.size()<<endl;
    for(auto i:res)cout<<i.F<<" "<<i.S<<endl;
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