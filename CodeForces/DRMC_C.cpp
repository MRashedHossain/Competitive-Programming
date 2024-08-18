#include<bits/stdc++.h>
using namespace std;

#define RASHED ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define int long long int

#define show(x) cout << #x << " = " << x << endl
#define inf (int)1e17
#define maxn 100010

#define F first
#define S second

int solve(int tc) {
    double x,y,last;
    cin>>x>>y;
    double tmp = x;
    vector<double> v;
    for(int i=0;i<20;i++){
        v.push_back(tmp);
        tmp = tmp/2;
    }
    double xCurr = 0,yCurr = 0;
    for(int i=0;i<20;i++){
        xCurr += v[i];
        if(y*(i+1) > xCurr)return i+1;
    }
     last = 2*x;
    int res = (int)last/(int)y;
    if((int)last%(int)y)res++;
    return res;
}
signed main() {
    RASHED
    int TC = 1;
    cin>>TC;
    for(int i=1; i<=TC; i++){
            int res = solve(i);
        cout<<"Case #"<<i<<": "<<res<<endl;
    }
    return 0;
}
/**
CASES:

*/

