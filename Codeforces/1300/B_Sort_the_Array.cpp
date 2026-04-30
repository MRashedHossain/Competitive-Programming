#include<bits/stdc++.h>
using namespace std;
 
#define endl "\n"
#define RASHED ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define int long long int
#define inf 99999999999999999
#define F first
#define S second
///#define show(x) cout << #x << " : " << x << endl
#define maxn 100100
 
void solve() {
 
}
int32_t main() {
    RASHED
    int n,a[maxn]= {0},mx = 0,mn = inf;
    pair<int,int> ans={0,0};
    cin>>n;
    for(int i=1; i<=n; i++)cin>>a[i];
    bool flg = true,done = true;
    for(int i=1; i<=n; i++) {
        if(a[i]<a[i-1] && flg) {
            flg = false;
            mx = max(mx,a[i-1]);
            mn = min(mn,a[i]);
            ans.F = i-1;
            ans.S = i;
        }
        else  if(a[i]<a[i-1] && !flg){
            ans.S = i;
            mx = max(mx,a[i-1]);
            mn = min(mn,a[i]);
        }
        else if(a[i]>a[i-1] && !flg)break;
    }
    if(flg){
        cout<<"yes"<<endl;
        cout<<"1 1"<<endl;
        return 0;
    }
    ///cout<<mx<<endl;
    ///cout<<ans.F<<" "<<ans.S<<endl;
    for(int i=ans.S+1;i<=n;i++){
        if(a[i]<a[i-1] || a[i]<mx){
            cout<<"no"<<endl;
            return 0;
        }
    }
    for (int i=0;i<ans.F;i++){
        if(a[i]>mn){
            cout<<"no"<<endl;
            return 0;
        }
    }
    cout<<"yes"<<endl;
    cout<<ans.F<<" "<<ans.S<<endl;
    return 0;
}