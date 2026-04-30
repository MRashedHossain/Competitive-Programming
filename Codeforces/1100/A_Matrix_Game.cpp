#include<bits/stdc++.h>
using namespace std;
 
#define endl "\n"
#define RASHED ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
///#define int long long int
 
int solve() {
    int n,m;
    cin>>n>>m;
    int ans = 0;
    map<int,int> R,C;
    for(int i=0; i<n; i++) {
        for(int j=0; j<m; j++) {
            int x;
            cin>>x;
            if(x) {
                R[i]++;
                C[j]++;
            }
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(!R[i] && !C[j]){
                ans++;
                R[i]++;
                C[j]++;
            }
        }
    }
    return ans%2;
}
signed main() {
    RASHED
    int tc;
    cin>>tc;
    while(tc--)cout<<(solve()?"Ashish":"Vivek")<<endl;
    return 0;
}