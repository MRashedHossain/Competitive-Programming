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
    int n,a,b;
    cin>>n>>a>>b;
    string s;
    cin>>s;
    string ss = "";
    for(int i=0; i<100; i++)ss+=s;
    int x = 0,y = 0;
    for(auto c:ss) {
        if(c == 'N')y++;
        else if(c == 'S')y--;
        else if(c == 'E')x++;
        else x--;
        if(x == a && y == b)return true;
    }
    return false;
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