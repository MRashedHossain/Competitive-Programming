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
bool prime(int n){
   for(int i=2;i*i<=n;i++){
        if(n%i == 0)return false;
   }
   return true;
}
signed main() {
    RASHED
    int val = 524287^131071;
    cout<<val<<endl;
    cout<<(prime(val)?"Prime":"Not Prime")<<endl;
    return 0;
}
/**
CASES:
Prime with all bits ON --> 3 7 31 127 8191 131071 524287
*/

