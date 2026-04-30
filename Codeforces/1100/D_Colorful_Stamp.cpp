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
 
bool solve(int tc) {
    int n;string s;cin>>n>>s;
    s+='w';
    int r = 0,b = 0;
    for(auto i:s){
        if(i == 'R')r++;
        else if (i == 'B')b++;
        else {
            if(r+b > 0 && (r == 0 || b == 0))return false;
            r = 0;b = 0;
        }
    }
    return true;
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