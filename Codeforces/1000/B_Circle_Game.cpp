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
    int n;cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++)cin>>v[i];
    if(n%2)return true;
    int mn = inf,pos = -1;
    for(int i=0;i<n;i++){
        if(v[i] < mn){
            mn = v[i];
            pos = i;
        }
    }
    return pos%2;
}
signed main() {
    RASHED
    int TC = 1;
    cin>>TC;
    for(int i=1; i<=TC; i++)cout<<(solve(i)?"Mike":"Joe")<<endl;
    return 0;
}
/**
CASES:
 
*/