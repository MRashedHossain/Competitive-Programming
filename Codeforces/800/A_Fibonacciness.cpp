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
int calcu(vector<int> &v){
//    for(int i=1;i<=5;i++)cout<<v[i]<<" ";
//    cout<<endl;
    int curr = 0;
    for(int i=3;i<=5;i++){
        if(v[i] == (v[i-1]+v[i-2]))curr++;
    }
    return curr;
}
void solve(int tc) {
    vector<int> v(6,0);
    int res = 0;
    cin>>v[1]>>v[2]>>v[4]>>v[5];
    for(int i = -105;i<=105;i++){
        v[3] = i;
        res = max(calcu(v),res);
    }
    cout<<res<<endl;
}
signed main() {
    RASHED
    int TC = 1;
    cin>>TC;
    for(int i=1; i<=TC; i++)solve(i);
    return 0;
}
/**
CASES:
 
*/