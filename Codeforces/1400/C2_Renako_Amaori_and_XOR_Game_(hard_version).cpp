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
    vector<int> a(n),b(n),msk_a(20,0),msk_b(20,0);
    for(int i=0; i<n; i++)cin>>a[i];
    for(int i=0; i<n; i++)cin>>b[i];
    for(int ii:a) {
        for(int i=20; i>=0; i--) {
            if(ii&(1<<i))msk_a[i]++;
        }
    }
    for(int ii:b) {
        for(int i=20; i>=0; i--) {
            if(ii&(1<<i))msk_b[i]++;
        }
    }
//    for(int i=5;i>=0;i--)cout<<msk_a[i]<<" ";
//    cout<<endl;
//    for(int i=5;i>=0;i--)cout<<msk_b[i]<<" ";
//    cout<<endl;
//    return;
    for(int ii=20; ii>=0; ii--) {
        if(msk_a[ii]%2 != msk_b[ii]%2) {
            int fx = (1<<ii);
            for(int i=n-1; i>=0; i--) {
                int aa = a[i],bb = b[i];
                int l = (aa&fx),r = (bb&fx);
                if((l > 0 && r == 0) || (l == 0 && r > 0)) {
                    if(i%2)cout<<"Mai"<<endl;
                    else cout<<"Ajisai"<<endl;
                    return;
                }
            }
        }
    }
    int aa = a.front(),bb = b.front();
    for(int i=1; i<n; i++)(aa ^= a[i]);
    for(int i=1; i<n; i++)(bb ^= b[i]);
    if(aa > bb)cout<<"Ajisai"<<endl;
    else if(bb > aa)cout<<"Mai"<<endl;
    else cout<<"Tie"<<endl;
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
 