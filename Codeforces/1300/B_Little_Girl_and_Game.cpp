#include<bits/stdc++.h>
using namespace std;
 
#define endl "\n"
#define RASHED ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
///#define ll long long int
///#define inf 99999999999999999
#define F first
#define S second
///#define show(x) cout << #x << " : " << x << endl
///#define maxn 200100
 
void solve() {
 
}
int main() {
    RASHED
    string s;
    cin>>s;
    map<char,int> m;
    for(int i=0;i<s.size();i++)m[s[i]]++;
    bool fnd = true;
    int ans = 0;
    for(auto i:m){
        if(i.S%2 && fnd)fnd = false;
        else if(i.S%2 && !fnd) ans++;
    }
    ///cout<<ans<<endl;
    cout<<(ans%2?"Second":"First")<<endl;
    return 0;
}
 