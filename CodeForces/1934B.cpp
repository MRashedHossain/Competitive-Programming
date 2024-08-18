#include<bits/stdc++.h>
using namespace std;

#define endl "\n"
#define RASHED ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
///#define show(x) cout << #x << " = " << x << endl
#define int long long int

int A[] = {0,1,2,1,2,3,1,2,3,2,1,2,2,2,3,1,2,3,2,3,2,2,3,3,3,2,3,3,3,4,2};
int solve() {
    int n;
    cin>>n;
    if(n<=30)return A[n];
    int nn = n-30;
    int ans = nn/15;
    if(nn%15)ans++;
    return ans+(A[n-(ans*15)]);
}
signed main() {
    RASHED
    int tc;
    cin>>tc;
    while(tc--)cout<<solve()<<endl;
    return 0;
}

