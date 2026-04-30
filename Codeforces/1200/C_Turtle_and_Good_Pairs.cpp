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
    int n;string s;cin>>n>>s;
    map<char,int> f;
    for(auto i:s)f[i]++;
    while(true){
        for(char i='a';i<='z';i++){
            if(f[i]){
                cout<<i;
                f[i]--;
            }
        }
        bool curr = false;
            for(char i='a';i<='z';i++){
            if(f[i]){
               curr = true;
               break;;
            }
        }
        if(curr == false){
            cout<<endl;
            return;
        }
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
 