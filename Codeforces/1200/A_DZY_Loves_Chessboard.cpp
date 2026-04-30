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
 
void solve() {
 
}
int main() {
    RASHED
    int n,m;
    cin>>n>>m;
    string s[111];
    char now = 'B';
    for (int i=0; i<n; i++)cin>>s[i];
    for(int i=0; i<n; i++) {
        for (int j=0;j<m;j++){
                if(s[i][j] == '-')continue;
            if(s[i][j] == '.' && (i+j)%2)s[i][j] = 'W';
            else s[i][j] = 'B';
        }
    }
    for (int i=0; i<n; i++)cout<<s[i]<<endl;
    return 0;
}