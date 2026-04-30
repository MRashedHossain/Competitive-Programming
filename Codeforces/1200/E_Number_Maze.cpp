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
    string s;
    int x,y;
    cin>>s>>x>>y;
    string a,b;
    int xx = min(x,y),yy = max(x,y),curr = 1;
    while(true) {
        if(curr == xx && curr == yy) {
            a = s;
            b = s;
            break;
        }
        if(curr == xx)a = s;
        if(curr == yy) {
            b = s;
            break;
        }
        next_permutation(s.begin(),s.end());
        curr++;
    }
    int l = 0,r = 0,n = s.size();
    for(int i=0;i<n;i++){
        if(a[i] == b[i])l++;
    }
    r = n-l;
    cout<<l<<"A"<<r<<"B"<<endl;
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