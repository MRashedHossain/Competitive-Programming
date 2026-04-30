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
    int n;
    cin>>n;
    if(n == 1)cout<<"1"<<endl;
    else if(n == 2)cout<<"2 1"<<endl;
    else if(n == 3)cout<<"2 1 3"<<endl;
    else {
        vector<int> res(n+2,0);
        int lo = 1,mid = (n+1)/2,hi = n;
        res[lo] = 2;
        res[mid] = 1;
        res[hi] = 3;
        for(int i=2,j=4; i<mid; i++,j++)res[i] = j;
        for(int i=mid+1,j=mid+2; i<n; i++,j++)res[i] = j;
        for(int i=1; i<=n; i++)cout<<res[i]<<" ";
        cout<<endl;
    }
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