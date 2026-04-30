#include<bits/stdc++.h>
using namespace std;
 
#define RASHED ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define int long long int
 
#define show(x) cout << #x << " = " << x << endl
#define inf (int)1e18
#define maxn 100010
 
#define F first
#define S second
 
void solve(int tc) {
    int n;cin>>n;
    if(n == 1 || n == 3){
        cout<<-1<<endl;
        return;
    }
    if(n%2){
        for(int i=0;i<n-4;i++)cout<<"3";
        cout<<"6366"<<endl;
    }
    else {
        for(int i=0;i<n-2;i++)cout<<"3";
        cout<<"66"<<endl;
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
 