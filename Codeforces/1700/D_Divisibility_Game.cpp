#include<bits/stdc++.h>
using namespace std;
 
#define RASHED ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define int long long int
 
#define show(x) cout << #x << " = " << x << endl
#define inf (int)1e17
#define maxn 200010
 
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define sz(x) ((int)(x).size())
 
#define F first
#define S second
 
void solve(int tc) {
      int n,m;cin>>n>>m;
      vector<int> a(n),b(m);
      int mb = 0;
      for(int &i:a)cin>>i;
      for(int &i:b){
        cin>>i;
        mb = max(mb,i);
      }
      sort(all(a));
      set<int> s(all(a));
      int unq = sz(s);
      vector<int> f(mb+3,0);
      for(int i:s){
        if(i>mb)break;
        for(int j=i;j<=mb;j+=i)f[j]++;
      }
      int alice = 0,bob = 0,duijon = 0;
      for(int i:b){
        int now = f[i];
        if(now == unq)alice++;
        else if(now == 0)bob++;
        else duijon++;
      }
      if(alice > bob)cout<<"Alice"<<endl;
      else if(bob > alice)cout<<"Bob"<<endl;
      else {
        if(duijon%2)cout<<"Alice"<<endl;
        else cout<<"Bob"<<endl;
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
 