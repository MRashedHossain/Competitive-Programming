#include<bits/stdc++.h>
using namespace std;

#define endl "\n"
#define RASHED ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
///#define show(x) cout << #x << " = " << x << endl
///#define int long long int

bool solve() {
    int n;cin>>n;
    vector<int> v;
    stack<int> s;
    for(int i=0;i<n;i++){
        int x;cin>>x;
        v.push_back(x);
    }
    if(n==1)return true;
    s.push(v[n-1]);
    for(int i=n-2;i>=0;i--){
        if(v[i]<=s.top() || v[i]<10)s.push(v[i]);
        else {
            s.push(v[i]%10);
            s.push(v[i]/10);
        }
    }
    int pre = s.top();
    s.pop();
    while(!s.empty()){
        if(s.top()<pre)return false;
        pre = s.top();
        s.pop();
    }
}
signed main() {
    RASHED
    int tc;
    cin>>tc;
    while(tc--)cout<<(solve()?"YES":"NO")<<endl;
    return 0;
}
/**
Cases:
1
4
12,3,45,54
*/
