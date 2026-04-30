#include<bits/stdc++.h>
using namespace std;
 
#define endl "\n"
#define RASHED ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
///#define int long long int
 
bool solve() {
    int n;cin>>n;
    vector<int> v;
    bool chek[n+8];
    memset(chek,false,sizeof chek);
    for(int i=0;i<n;i++){
        int k;cin>>k;
        v.push_back(k);
    }
    sort(v.rbegin(),v.rend());
    for(auto i:v){
        while(true){
                if(!i)break;
            if(i <= n){
                if(!chek[i]){
                    chek[i] = true;
                    break;
                }
            }
            i/=2;
        }
        if(!i)return false;
    }
    return true;
}
signed main() {
    RASHED
    int tc;
    cin>>tc;
    while(tc--)cout<<(solve()?"YES":"NO")<<endl;
    return 0;
}
 