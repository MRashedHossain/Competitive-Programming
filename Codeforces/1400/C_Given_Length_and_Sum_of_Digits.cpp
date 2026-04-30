#include<bits/stdc++.h>
using namespace std;
 
#define endl "\n"
#define RASHED ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
///#define int long long int
 
void solve() {
 
}
int32_t main() {
    RASHED
    int n,k;
    cin>>n>>k;
    if(n == 1 && k == 0) {
        cout<<"0 0"<<endl;
        return 0;
    }
    if(!k || n*9<k) {
        cout<<"-1 -1"<<endl;
        return 0;
    }
    vector<int> mn,mx;
    for(int i=0; i<n; i++) {
        if(k>=9) {
            mx.push_back(9);
            k-=9;
        } else {
            mx.push_back(k);
            k=0;
        }
    }
    mn = mx;
    reverse(mn.begin(),mn.end());
    if(mn[0] == 0) {
        mn[0]++;
        for(int i=1; i<n; i++) {
            if(mn[i]>0) {
                mn[i]--;
                break;
            }
        }
    }
    for(auto i:mn)cout<<i;
    cout<<" ";
    for(auto i:mx)cout<<i;
    cout<<endl;
    return 0;
}