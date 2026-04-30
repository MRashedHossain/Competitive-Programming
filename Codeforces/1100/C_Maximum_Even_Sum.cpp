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
int base(int n){
    int curr = 0;
    while(n%2 == 0){
        n/=2;
        curr++;
    }
    return curr;
}
void solve(int tc) {
    int a,b;cin>>a>>b;
    int p = (a*b);
    if(p%2)cout<<p+1<<endl;
    else if((a%2 == 0 && b%2 == 1) || (a%2 == 1 && b%2 == 0 && base(b) == 1))cout<<-1<<endl;
    else cout<<((p/2)+2)<<endl;
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
 