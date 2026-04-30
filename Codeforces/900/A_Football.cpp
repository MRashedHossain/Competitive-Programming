#include<bits/stdc++.h>
using namespace std;
 
#define RASHED ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define int long long int
 
#define show(x) cout << #x << " : " << x << endl
#define inf (int)1e17
#define maxn 100010
 
#define F first
#define S second
 
void solve(int tc) {
    string s;cin>>s;
    bool res = false;
    int n = s.size();
    if(n<7){
        cout<<"NO"<<endl;
        return;
    }
    for(int i=0;i<n-6;i++){
        set<char> ss;
        for(int j=i;j<i+7;j++)ss.insert(s[j]);
        if(ss.size() == 1)res = true;
    }
    cout<<(res?"YES":"NO")<<endl;
}
signed main() {
    RASHED
    int TC = 1;
    ///cin>>TC;
    for(int i=1; i<=TC; i++)solve(i);
    return 0;
}
 
 
 
 