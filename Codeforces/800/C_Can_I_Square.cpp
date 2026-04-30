#include<bits/stdc++.h>
using namespace std;
 
#define endl "\n"
#define RASHED ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
///#define show(x) cout << #x << " = " << x << endl
#define int long long int
 
bool solve() {
    int n,sum = 0;cin>>n;
    for(int i=0;i<n;i++){
        int x;cin>>x;
        sum+=x;
    }
    int root = sqrt(sum);
    return (root*root == sum);
}
signed main() {
    RASHED
    int tc;
    cin>>tc;
    while(tc--)cout<<(solve()?"YES":"NO")<<endl;
    return 0;
}
 