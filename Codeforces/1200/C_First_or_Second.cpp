#include<bits/stdc++.h>
using namespace std;
 
#define RASHED ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define int long long int
 
#define show(x) cout << #x << " = " << x << endl
#define inf (int)1e15
#define maxn 200010
 
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define sz(x) ((int)(x).size())
 
#define F first
#define S second
 
int n,A[maxn],M[maxn],C[maxn];
 
int rcsum(int l){
    if (l>n)return 0;
    return C[l];
}
 
int maxsum(int r) {
    if (r<1)return 0;
    return M[r];
}
 
void solve(int tc) {
    cin >> n;
    C[n+1]=0;
    for (int i=1 ; i<=n;i++){
        cin >> A[i];
        if (i==1)M[i]=A[i];
        else M[i] = M[i-1]+abs(A[i]);
    }
    for (int i=n ; i>=1 ; i--) C[i] = C[i+1]-A[i];
    int ans = -inf;
    for (int i=1;i<=n ; i++)ans = max(ans,maxsum(i-1)+rcsum(i+1));
    cout << ans << endl;
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
1
2
2 -3
4
1 4 3 4
4
-4 2 3 -6
5
-2 -3 4 10 -9
5
-12345678 -1000000000 -999999999 1000000000 -999999999
2
-7 1
5
7 -6 -1 -8 -8
 
*/
 
 