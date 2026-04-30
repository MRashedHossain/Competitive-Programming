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
    vector<int> alice,bob;
    for(int i=0;i<n;i++){
        if(s[i] == 'A')alice.push_back(i+1);
        else bob.push_back(i+1);
    }
    if(alice.back() == n){
        if(bob.front() != 1)return true;
        else {
            if(bob.back() == n-1)return false;
            return true;
        }
    }
    else {
        if(alice.front() == 1 && bob.size() == 1)return true;
        return false;
    }
}
signed main() {
    RASHED
    int TC = 1;
    cin>>TC;
    for(int i=1; i<=TC; i++)cout<<(solve(i)?"Alice":"Bob")<<endl;
    return 0;
}
/**
CASES:
 
*/