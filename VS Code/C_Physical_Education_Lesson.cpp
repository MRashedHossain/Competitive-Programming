#include<bits/stdc++.h>
using namespace std;

#define endl "\n"
#define RASHED ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
///#define show(x) cout << #x << " = " << x << endl
#define int long long int

void solve(int tc) {
    int n,x,y;
    cin>>n>>x>>y;
    vector<int> v,odd,even;
    for(int i=0; i<x; i++) {
        int tmp;
        cin>>tmp;
        v.push_back(tmp);
    }
    sort(v.begin(),v.end());
    int res = x-2,yy = y;
    for(int i=1; i<x; i++) {
        int diff = v[i]-v[i-1]-1;
        if(diff <= 1)res+=diff;
        else if(diff%2)odd.push_back(diff/2);
        else even.push_back(diff/2);
    }

    int diff = v[x]-v[0]-1;
    if(diff <= 1)res+=diff;
    else if(diff%2)odd.push_back(diff/2);
    else even.push_back(diff/2);

    sort(odd.begin(),odd.end());
    sort(even.begin(),even.end());
    for(auto i:odd) {
        if(y >= i) {
            res+=(i+1);
            y-=i;
        } else {
            res+=y;
            y = 0;
            break;
        }
    }
    for(auto i:even) {
        if(y >= i) {
            res+=i;
            y-=i;
        } else {
            res+=y;
            y = 0;
            break;
        }
    }
    res+=(yy-y);
    cout<<res<<endl;
}
signed main() {
    RASHED
    int TC;
    cin>>TC;
    for(int i=1; i<=TC; i++)solve(i);
    return 0;
}
/**
CASES:

*/

