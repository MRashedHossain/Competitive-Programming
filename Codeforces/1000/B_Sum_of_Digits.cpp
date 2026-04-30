#include<bits/stdc++.h>
using namespace std;
 
#define endl "\n"
#define RASHED ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
///#define ll long long int
///#define inf 99999999999999999
///#define F first
///#define S second
///#define show(x) cout << #x << " : " << x << endl
///#define maxn 200100
 
void clean() {
 
}
void solve() {
 
}
int main() {
    RASHED
    string s;
    cin>>s;
    int ans = 0,sum = 0;
    while(s.size() != 1){
        for(int i=0;i<s.size();i++)sum+=(s[i]-'0');
        s = to_string(sum);
        sum = 0;
        ans++;
    }
    cout<<ans<<endl;
    return 0;
}
 