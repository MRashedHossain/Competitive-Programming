#include<bits/stdc++.h>
using namespace std;
 
#define endl "\n"
#define RASHED ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
///#define ll long long int
///#define inf 99999999999999999
///#define F first
///#define S second
///#define show(x) cout << #x << " : " << x << endl
///#define maxn 200100
 
void solve() {
 
}
int main() {
    RASHED
    int a,b,c,n,ans = 0;
    cin>>n>>a>>b>>c;
    vector<int>v{a,b,c};
    sort(v.begin(),v.end());
    ///cout<<v[0]<<" "<<v[1]<<" "<<v[2]<<endl;
    for(int i=0; i<=n; i++) {
        for(int j=0; j<=n; j++) {
            int flg = n-((v[0]*i)+v[1]*j);
            if(flg%v[2] == 0 && flg>=0)ans=max(ans,(flg/v[2])+i+j);
        }
    }
    cout<<ans<<endl;
}
 