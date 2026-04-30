#include<bits/stdc++.h>
using namespace std;
 
#define RASHED ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define int long long int
 
#define show(x) cout << #x << " = " << x << endl
#define inf (int)1e17
#define maxn 100010
 
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define sz(x) ((int)(x).size())
 
#define F first
#define S second
 
void solve(int tc) {
  int n;cin>>n;
  vector<int> v(n),f(105,0);
  for(auto &i:v){
    cin>>i;
    f[i]++;
  }
  sort(all(v));
  int res = n - f[0];
  bool got = false;
  for(int i=1;i<=100;i++){
    if(f[i] > 1){
      got = true;
      break;
    }
  }
  if(f[0])cout<<n-f[0]<<endl;
  else if(got)cout<<n<<endl;
  else cout<<n+1<<endl;
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
 
 