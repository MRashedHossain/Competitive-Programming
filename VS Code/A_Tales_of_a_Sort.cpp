#include<bits/stdc++.h>
using namespace std;

#define endl "\n"
#define RASHED ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

#define int long long int
#define show(x) cout << #x << " = " << x << endl
///#define maxn 200100

int solve(int tc) {
    int n;cin>>n;
    vector<int> v;
    for(int i=0;i<n;i++){
        int x;cin>>x;
        v.push_back(x);
    }
    if(is_sorted(v.begin(),v.end()))return 0;
    int curr = LLONG_MAX,i = n-1,res = 0;
    while(v[i] <= curr && i>=0){
        curr = v[i];
        i--;
    }
    ///show(i);
    for(int j=0;j<=min(i+1,n-1);j++)res = max(res,v[j]);
    return res;
}
signed main() {
    RASHED
    int TC;
    cin>>TC;
    for(int i=1; i<=TC; i++)cout<<solve(i)<<endl;
    return 0;
}
/**
CASES:

*/

