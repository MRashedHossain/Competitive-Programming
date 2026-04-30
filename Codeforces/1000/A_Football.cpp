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
    int n;cin>>n;
    map<string,int> m;
    while(n--){
        string s;cin>>s;m[s]++;
    }
    int ans = 0;string s;
    for (auto i:m){
        if(i.S > ans){
            ans = i.S;
            s = i.F;
        }
    }
    cout<<s<<endl;
}