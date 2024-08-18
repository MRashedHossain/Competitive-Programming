#include<bits/stdc++.h>
using namespace std;

#define endl "\n"
#define RASHED ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
///#define show(x) cout << #x << " = " << x << endl
///#define int long long int

vector<int> AprilFool = {8,6,9,7,7,7,7,8,9,8,10,10};
signed main() {
    RASHED
    reverse(AprilFool.begin(),AprilFool.end());
    for(auto i:AprilFool)cout<<i<<" ";
    cout<<endl;
}
/**
CASES:

*/

