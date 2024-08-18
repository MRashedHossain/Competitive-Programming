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
int BS(vector<int> v,int n) {
    int mid = 1;
    for(int i=0; i<31; i++) {
        int cmp = v[0]*mid,sum = 0;
        for(int i=0; i<n; i++) {
            if(cmp%v[i])sum+=((cmp/v[i])+1);
            else sum+=(cmp/v[i]);
        }
        if(cmp - sum > 0)return cmp;
        mid*=2;
    }
    return -1;
}
void solve(int tc) {
    int n;
    cin>>n;
    vector<int> v,vv;
    for(int i=1; i<=n; i++) {
        int x;
        cin>>x;
        v.push_back(x);
        vv.push_back(x);
    }
    sort(vv.rbegin(),vv.rend());
    int val = BS(vv,n);
    if(val == -1) {
        cout<<-1<<endl;
        return;
    }
    for(int i=0; i<n; i++) {
        int curr = val/v[i];
        if(val%v[i])curr++;
        cout<<curr<<" ";
    }
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

