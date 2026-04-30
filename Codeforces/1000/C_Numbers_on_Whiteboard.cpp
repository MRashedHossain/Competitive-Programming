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
    int n;cin>>n;
    cout<<"2"<<endl;
    if(n == 2){
        cout<<"2 1"<<endl;
        return;
    }
    cout<<n<<" "<<n-2<<endl;
    cout<<n-1<<" "<<n-1<<endl;
    int now = n-1;
    for(int i=n-3;i>=1;i--){
        cout<<now<<" "<<i<<endl;
        now = (now+i)/2;
    }
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