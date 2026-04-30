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
int solve() {
    int n,pc1,pc2,ans = -1;
    bool flg = false;
    cin>>n>>pc1>>pc2;
    for (int i=1; i<n; i++) {
        int x,y;
        cin>>x>>y;
        if (x >= pc1 && y>=pc2)flg = true;
    }
    if (flg)return -1;
    else return pc1;
}
int main() {
    RASHED
    int tc;
    cin>>tc;
    while(tc--) {
        cout<<solve()<<endl;
    }
    return 0;
}
 