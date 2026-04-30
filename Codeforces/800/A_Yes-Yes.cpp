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
string check = "YesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYes";
bool solve(int tc) {
    string s;cin>>s;
    int n = s.size(),nn = check.size();
    for(int i=0;i<nn-n;i++){
        string now = check.substr(i,n);
        if(now == s)return true;
    }
    return false;
}
signed main() {
    RASHED
    int TC = 1;
    cin>>TC;
    for(int i=1; i<=TC; i++)cout<<(solve(i)?"YES":"NO")<<endl;
    return 0;
}
/**
CASES:
 
*/