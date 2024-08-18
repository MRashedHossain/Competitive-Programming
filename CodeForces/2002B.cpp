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
    deque<int> aa,bb;
    for(int i=1;i<=n;i++){
        int x;cin>>x;aa.push_front(x);
    }
    for(int i=1;i<=n;i++){
        int x;cin>>x;bb.push_front(x);
    }
    while(aa.size() > 1){
        if(aa.front() == bb.front() && aa.back() == bb.back()){
            aa.pop_front();
            bb.pop_front();
            continue;
        }
        else if(aa.front() == bb.back() && bb.front() == aa.back()){
            aa.pop_front();
            bb.pop_back();
            continue;
        }
        else return true;
    }
    if(aa.front() != bb.front())return true;
    return false;
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
