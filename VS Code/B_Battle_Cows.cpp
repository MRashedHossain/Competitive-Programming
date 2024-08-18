#include<bits/stdc++.h>
using namespace std;

#define endl "\n"
#define RASHED ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

#define int long long int
///#define show(x) cout << #x << " = " << x << endl
///#define maxn 200100

int solve(int tc) {
    int n,k,pos,val,res = 0;
    cin>>n>>k;
    pos = k-1;
    vector<int> v;
    for(int i=0; i<n; i++) {
        int x;cin>>x;
        v.push_back(x);
        if(i == pos) val = x;
    }
    if(pos == 0) {
        for(int i=1;i<n;i++){
            if(v[i] < v[pos])res++;
            else break;
        }
        return res;
    } else {
        int next_val = -1,next_pos = -1,res = 0;
        for(int i=0;i<n;i++){
            if(v[i] > v[pos]){
                next_pos = i;
                next_val = v[i];
                break;
            }
        }
        if(next_pos == -1)return n-1;
        if(next_pos > pos)return next_pos-1;
        if(next_pos > 1)res++;
        for(int i=next_pos+1;i<n;i++){
            if(v[i] >= v[pos])return res;
            res++;
        }
        return res;
    }
}
signed main() {
    RASHED
    int TC;
    cin>>TC;
    for(int i=1; i<=TC; i++)cout<<solve(i)<<endl;
    return 0;
}
/**
CASES:
1
5 5
386397236 187533184 8314578 802929321 432147499
*/

