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
int fac(int n){
    int res  =1;
    for(int i=1;i<=n;i++)res*=i;
    return res;
}
void solve(int tc) {
    int n,d;
    cin>>n>>d;
    if(n>5) {
        if(d == 5) {
            cout<<"1 3 5 7 9"<<endl;
        } else {
            cout<<"1 3 7 9"<<endl;
        }
        return;
    }
    int sum = fac(n)*d;
    set<int> res{1};
    if(d == 5)res.insert(5);
    if(d == 7)res.insert(7);
    if(sum%3 == 0)res.insert(3);
    if(sum%9 == 0)res.insert(9);
    if(n>2)res.insert(7);
    for(auto i:res)cout<<i<<" ";
    cout<<endl;
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