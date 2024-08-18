#include<bits/stdc++.h>
using namespace std;

#define endl "\n"
#define RASHED ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define F first
#define S second

#define int long long
///#define inf LLONG_MAX
///#define show(x) cout << #x << " : " << x << endl
///#define maxn 200100

///int dx[] = {-1,1,0,0}; ///Side sharing move
///int dy[] = {0,0,-1,1}; ///Side sharing move
///int dx[] = {+0,+0,+1,-1,-1,+1,-1,+1}; ///King's move
///int dy[] = {-1,+1,+0,+0,+1,+1,-1,-1}; ///King's move
///int dx[] = {-2,-2,-1,-1,+1,+1,+2,+2}; ///Knight's move
///int dy[] = {-1,+1,-2,+2,-2,+2,-1,+1}; ///Knight's move

#define all(x) x.begin(),x.end()
#define rall(x) x.rbegin(),x.rend()
#define sz(x) (int)x.size()

void solve(int tc) {
    int n;cin>>n;
    int cnt = 0,x = n%10;
    while (x == 0 && n != 0)
    {
        n = n/10;
        cnt++;
        x = n%10;
    }
    if(cnt > 2)cout<<"Counterfeit."<<endl;
    else if(cnt > 1)cout<<"Shatak."<<endl;
    else if(cnt > 0)cout<<"Dashak."<<endl;
    else cout<<"Ekok."<<endl;
}
signed main() {
    RASHED
    int TC;
    cin>>TC;
    for(int i=1;i<=TC;i++)solve(i);
    return 0;
}
/**
CASES:

*/
