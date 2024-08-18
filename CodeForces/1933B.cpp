#include<bits/stdc++.h>
using namespace std;

#define endl "\n"
#define RASHED ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
///#define show(x) cout << #x << " = " << x << endl
#define int long long int

int solve() {
    int n,sum = 0;cin>>n;
    vector<int> v;
    for(int i=0;i<n;i++){
        int x;cin>>x;
        sum+=x;
        v.push_back(x);
    }
    sort(v.begin(),v.end());
    if(sum%3 == 0)return 0;
    if((sum+1)%3 == 0)return 1;
    for(auto i:v){
        if(i%3 == sum%3)return 1;
    }
    return 2;
}
signed main() {
    RASHED
    int tc;
    cin>>tc;
    while(tc--)cout<<solve()<<endl;
    return 0;
}


