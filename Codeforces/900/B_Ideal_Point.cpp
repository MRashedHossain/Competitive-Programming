#include<bits/stdc++.h>
using namespace std;
 
#define endl "\n"
#define RASHED ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
///#define int long long int
 
bool solve() {
    int n,k;cin>>n>>k;
    map<int,int> freq;
    while(n--){
        int x,y;cin>>x>>y;
        if(k >= x && k <= y){
            for(int i=x;i<=y;i++)freq[i]++;
        }
    }
    if(!freq[k])return false;
    for(auto i:freq){
        if(i.first == k)continue;
        if(i.second >= freq[k])return false;
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
 