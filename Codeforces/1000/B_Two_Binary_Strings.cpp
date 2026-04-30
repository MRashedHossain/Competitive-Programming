#include<bits/stdc++.h>
using namespace std;
#define F first
#define S second
#define show(x) cout << #x << " : " << x << endl
#define ll long long int
#define maxn 100100
#define endl "\n"
#define FAST ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
 
void clean() {
 
}
bool solve() {
    string s,t;
    cin>>s>>t;
    vector <int> zero,one;
    for (int i=0; i<s.size(); i++) {
        if (s[i] == '1' && t[i] == '1')one.push_back(i);
        if (s[i] == '0' && t[i] == '0')zero.push_back(i);
    }
    for (int i=0; i<one.size(); i++) {
        for (int j=0; j<zero.size(); j++) {
            if (one[i]-zero[j]== 1)return true;
        }
    }
    return false;
}
int main() {
    FAST
    int tc;
    cin>>tc;
    while(tc--) {
        cout<<(solve()?"YES":"NO")<<endl;
    }
    return 0;
}