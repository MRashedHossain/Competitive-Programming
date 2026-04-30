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
     int n,c,d;cin>>n>>c>>d;
     set<int> s;
     for(int i=1;i<=n;i++){
        int x;cin>>x;s.insert(x);
     }
     int res = (n-s.size())*c;
     if(*(s.begin()) != 1){
        res += d;
        s.insert(1);
     }
     vector<int> v{s.begin(),s.end()};
     int pre = 0,fres = inf;
     n = v.size();
     for(int i=0;i<n;i++){
        int bam = (v[i] - pre - 1)*d,dan = (n-i)*c;
        fres = min(fres,res+dan);
        if(bam>=dan){
            res += dan;
            break;
        }
        else {
            res += bam;
            pre = v[i];
        }
     }
     cout<<min(fres,res)<<endl;
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