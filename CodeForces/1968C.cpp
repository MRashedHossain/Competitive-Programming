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
    int a[n+6],pre;
    for(int i=1; i<n; i++)cin>>a[i];
    pre = a[1]+1;cout<<pre<<" ";
    for(int i=1;i<n-1;i++){
        int tmp = a[i];
        while(pre+a[i] <= a[i+1])a[i]++;
        while((pre+a[i])%pre != tmp)a[i]++;
        cout<<pre+a[i]<<" ";
        pre += a[i];
    }
    cout<<a[n-1]<<endl;
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

