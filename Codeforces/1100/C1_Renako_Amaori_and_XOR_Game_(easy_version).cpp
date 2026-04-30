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
    vector<int> a(n),b(n);
    for(int i=0; i<n; i++)cin>>a[i];
    for(int i=0; i<n; i++)cin>>b[i];
    int ajisai = 0,mai = 0,last_move = -1;
    for(auto i:a)if(i)ajisai++;
    for(auto i:b)if(i)mai++;
    for(int i=n-1; i>=0; i--) {
        if(a[i]+b[i] == 1) {
            last_move = i+1;
            break;
        }
    }
    if(last_move == -1) {
        if(ajisai%2 == mai%2)cout<<"Tie"<<endl;
        else if(ajisai%2)cout<<"Ajisai"<<endl;
        else cout<<"Mai"<<endl;
        return;
    }
    if(ajisai%2 == mai%2)cout<<"Tie"<<endl;
    else cout<<(last_move%2?"Ajisai":"Mai")<<endl;
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
 