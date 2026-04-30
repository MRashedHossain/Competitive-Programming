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
    int n,k;
    cin>>n>>k;
    vector<int> v(n),p(100,0);
    for(int i=0; i<n; i++)cin>>v[i];
    sort(v.begin(),v.end());
    int res = 0;
    for(int i=0; i<n; i++) {
        int st = 0;
        if(v[i] > k)res++;
        else if(v[i] == k) {
            if(p[0] == 0)p[0]++;
            else res++;
        } else {
            while(v[i] <= k) {
                st++;
                v[i]*=2;
            }
            st--;
            bool fnd = false;
            for(int j=st; j>=0; j--) {
                if(p[j] == 0) {
                    p[j]++;
                    fnd = true;
                    break;
                }
            }
            if(fnd == false)res++;
        }
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
 