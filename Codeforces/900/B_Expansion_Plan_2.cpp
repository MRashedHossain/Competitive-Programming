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
    int n,x,y;
    string s;
    cin>>n>>x>>y>>s;
    x = abs(x);
    y = abs(y);
    int tar_x = min(x,y),tar_y = min(x,y),curr_x = 0,curr_y = 0,got_it = -1,eight = 0,four = 0;
    if(x == 0 && y == 0)return true;
    for(auto i:s) {
        if(i == '8')eight++;
        else four++;
    }
    if(tar_x > eight) {
        int need = (tar_x - eight)*2;
        if(need > four)return false;
        eight = tar_x;
        four -= need;
    }
    int dis = (max(x,y) - tar_x);
    eight -= tar_x;
    return (dis <= (eight+four));
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