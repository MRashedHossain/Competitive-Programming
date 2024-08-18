#include<bits/stdc++.h>
using namespace std;

#define endl "\n"
#define RASHED ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
///#define show(x) cout << #x << " = " << x << endl
///#define int long long int

void solve() {
    int n;
    cin>>n;
    int a[n+4];
    map<int,int> f,ff,fff;
    int MEX = n;
    for(int i=1; i<=n; i++) {
        cin>>a[i];
        f[a[i]]++;
    }
    for(int i=0; i<=n; i++) {
        if(f[i] == 0) {
            MEX = i;
            break;
        }
    }
    if(MEX == 0) {
        cout<<2<<endl;
        cout<<1<<" "<<1<<endl;
        cout<<2<<" "<<n<<endl;
        return;
    }
    int flg = 0,pos = n;
    for(int i=1; i<=n; i++) {
        if(flg == MEX) {
            pos = i;
            break;
        }
        if(a[i] < MEX && !fff[a[i]]){
            flg++;
            fff[a[i]]++;
        }
        if(flg == MEX) {
            pos = i;
            break;
        }
    }
    for(int i=pos+1; i<=n; i++) {
        ff[a[i]]++;
    }
    for(int i=0; i<MEX; i++) {
        if(ff[i] == 0) {
            cout<<-1<<endl;
            return;
        }
    }
    cout<<2<<endl;
    cout<<1<<" "<<pos<<endl;
    cout<<pos+1<<" "<<n<<endl;
}
signed main() {
    RASHED
    int tc;
    cin>>tc;
    while(tc--)solve();
    return 0;
}

