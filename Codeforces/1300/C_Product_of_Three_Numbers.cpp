#include<bits/stdc++.h>
using namespace std;
 
#define endl "\n"
#define RASHED ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
///#define int long long int
 
void solve() {
    int n;
    cin>>n;
    set<int> s;
    for(int i=2; i<=sqrt(n)+1; i++) {
        if(!(n%i)) {
            s.insert(i);
            s.insert(n/i);
        }
    }
    vector<int> v = {s.begin(),s.end()};
    int l = v.size();
    for(int i=0; i<l; i++) {
        for(int j=i+1; j<l; j++) {
            for(int k = j+1; k<l; k++) {
                if(v[i]*v[j]*v[k] == n) {
                    cout<<"YES"<<endl;
                    cout<<v[i]<<" "<<v[j]<<" "<<v[k]<<endl;
                    return;
                }
            }
        }
    }
    cout<<"NO"<<endl;
}
int32_t main() {
    RASHED
    int tc;
    cin>>tc;
    while(tc--)solve();
    return 0;
}
 