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
 
void solve(int tc) {
    int n;cin>>n;
    vector<int> res(n+4);
    if(n%2){
        if(n<27){
            cout<<-1<<endl;
            return;
        }
        else {
            res[1] = res[10] = res[26] = 1;
            res[11] = res[27] = 2;
            for(int i=3;i<=n;i+=2){
                if(i == 1 || i == 10 || i == 11 || i == 26 || i == 27)continue;
                res[i] = i;
                res[i-1] = i;
            }
 
        }
    }else {
        for(int i=1;i<=n;i+=2){
            res[i] = i;
            res[i+1] = i;
        }
    }
    for(int i=1;i<=n;i++)cout<<res[i]<<" ";
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
 