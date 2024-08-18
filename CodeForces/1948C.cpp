#include<bits/stdc++.h>
using namespace std;

#define endl "\n"
#define RASHED ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
///#define show(x) cout << #x << " = " << x << endl
///#define int long long int
string s[3];
bool vis[3][200010];
int dx[] = {0,0,-1,1},dy[] = {-1,1,0,0},n;
bool valid(int i,int j) {
    return (i<2 && i>=0 && j<n && j>=0);
}
void DFS(int u,int v) {
    vis[u][v] = true;
    for(int i=0; i<4; i++) {
        int U = u+dx[i],V = v+dy[i];
        if(valid(U,V) && !vis[U][V]) {
            vis[U][V] = true;
            if(s[U][V] == '>' && valid(U,V+1))DFS(U,V+1);
            if(s[U][V] == '<' && valid(U,V-1))DFS(U,V-1);
        }
    }
}
bool solve() {
    cin>>n;
    for(int i=0; i<2; i++) cin>>s[i];
    DFS(0,0);
    bool res = vis[1][n-1];
    for(int i=0; i<2; i++) {
        for(int j=0; j<n; j++)vis[i][j] = false;
    }
    return res;
}
signed main() {
    RASHED
    memset(vis,false,sizeof(vis));
    int tc;
    cin>>tc;
    while(tc--)cout<<(solve()?"YES":"NO")<<endl;
    return 0;
}
/**
Cases:
1
4
>>><
>><<
*/
