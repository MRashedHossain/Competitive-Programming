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
 
bool solve(int tc) {
    int n,k,lst = 0;cin>>n>>k;
    vector<int> f(1000);
    for(int i=1;i<=n;i++){
        int x;cin>>x;f[x]++;lst = max(lst,x);
    }
    int curr = 0,pos = -1;
    for(int i=1;i<=1000;i++){
        if(f[i] == 0){
            curr+=i;
            f[i]++;
            if(curr < k)continue;
            else if(curr > k)return false;
            else {
                lst = max(lst,i);
                break;
            }
        }
    }
    for(int i=1;i<=lst;i++){
        if(f[i] == 0)return false;
    }
    return true;
}
signed main() {
    RASHED
    int TC = 1;
    cin>>TC;
    for(int i=1; i<=TC; i++)cout<<(solve(i)?"YES":"NO")<<endl;
    return 0;
}
/**
CASES:
 
*/