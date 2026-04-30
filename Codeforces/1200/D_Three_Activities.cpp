#include<bits/stdc++.h>
using namespace std;
 
#define endl "\n"
#define RASHED ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
///#define int long long int
#define F first
#define S second
 
int solve() {
    int n;
    cin>>n;
    vector<pair<int,int>> A,B,C;
    for(int i=1; i<=n; i++) {
        int x;
        cin>>x;
        A.push_back({x,i});
    }
    for(int i=1; i<=n; i++) {
        int x;
        cin>>x;
        B.push_back({x,i});
    }
    for(int i=1; i<=n; i++) {
        int x;
        cin>>x;
        C.push_back({x,i});
    }
    sort(A.rbegin(),A.rend());
    sort(B.rbegin(),B.rend());
    sort(C.rbegin(),C.rend());
    int ans = 0;
    for(int i=0; i<3; i++) {
        for(int j=0; j<3; j++) {
            for(int k=0; k<3; k++) {
                set<int> chk;
                chk.insert(A[i].S);
                chk.insert(B[j].S);
                chk.insert(C[k].S);
                if(chk.size() == 3) {
                    ans = max((A[i].F + B[j].F + C[k].F),ans);
                }
            }
        }
    }
    return ans;
}
signed main() {
    RASHED
    int tc;
    cin>>tc;
    while(tc--)cout<<solve()<<endl;
    return 0;
}
 