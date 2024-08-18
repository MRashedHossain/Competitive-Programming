#include<bits/stdc++.h>
using namespace std;

#define RASHED ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define int long long int

#define show(x) cout << #x << " = " << x << endl
#define inf (int)1e20
#define maxn 100010

#define F first
#define S second

int dis_cal(int x,int y,int xx,int yy) {
    int xxx = (x-xx)*(x-xx);
    int yyy = (y-yy)*(y-yy);
    return xxx+yyy;
}
bool solve(int tc) {
    int n;
    int dis = inf;
    cin>>n;
    vector<pair<int,int>> v;
    pair<int,int> st,en;
    for(int i=0; i<n; i++) {
        int x,y;
        cin>>x>>y;
        v.push_back({x,y});
    }
    cin>>st.F>>st.S;
    cin>>en.F>>en.S;
    int mydis = dis_cal(st.F,st.S,en.F,en.S);
    for(auto i:v) {
        dis = min(dis,dis_cal(i.F,i.S,en.F,en.S));
    }
//    show(mydis);
//    show(dis);
    return mydis<dis;
}
signed main() {
    RASHED
    int TC = 1;
    cin>>TC;
    for(int i=1; i<=TC; i++)cout<<(solve(i)?"YES":"NO")<<endl;
    return 0;
}
/**
CASES:

*/
