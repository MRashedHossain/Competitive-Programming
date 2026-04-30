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
    int n;
    string a,b;
    cin>>n>>a>>b;
    vector<int> odd,even;
    for(int i=0; i<n; i++) {
        if(b[i] == '0') {
            (i%2?odd.push_back(i):even.push_back(i));
        }
    }
    for(int i=0; i<n; i++) {
        if(a[i] == '1') {
            if(i%2) {
                if(even.empty())return false;
                else even.pop_back();
            } else {
                if(odd.empty())return false;
                else odd.pop_back();
            }
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
3
5
10000
11111
5
01000
11111
5
11000
01111
 
*/