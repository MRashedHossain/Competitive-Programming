#include<bits/stdc++.h>
using namespace std;
 
#define endl "\n"
#define RASHED ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
 
void solve() {
    int n,a[105],f[105],flag = 0;
    memset(f,0,sizeof f);
    cin>>n;
    for(int i=0; i<n; i++) {
        cin>>a[i];
        f[a[i]]++;
    }
    for(int i=1; i<=100; i++) {
        if(f[i]>1)flag++;
    }
    ///cout<<flag<<endl;
    if(flag < 2) {
        cout<<-1<<endl;
        return;
    }
    for(int i=0; i<n; i++) {
        if(f[a[i]] == 1)cout<<"1 ";
        else if(flag>0) {
            cout<<"3 ";
            flag = -a[i];
        } else if(flag == -a[i])cout<<"3 ";
        else cout<<"2 ";
        f[a[i]]--;
    }
    cout<<endl;
}
int main() {
    RASHED
    int tc;
    cin>>tc;
    while(tc--) {
        solve();
    }
    return 0;
}