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
 
void solve(int tc) {
    int n,k;
    cin>>n>>k;
    if(n*n - k == 1) {
        cout<<"NO"<<endl;
        return;
    }
    cout<<"YES"<<endl;
    if(k == n*n) {
        for(int i=1; i<=n; i++) {
            for(int j=1; j<=n; j++)cout<<'U';
            cout<<endl;
        }
        return;
    }
    k = (n*n)-k;
    int done = 2;
    char res[n+2][n+2];
    for(int i=1; i<=n; i++)for(int j=1; j<=n; j++)res[i][j] = 'X';
    res[n][n] = 'L';
    res[n][n-1] = 'R';
    int pos = n-2;
    while(pos > 0 && done < k) {
        res[n][pos] = 'R';
        done++;
        pos--;
    }
    for(int i=n; i>0 && done < k; i--) {
        int pos = n-1;
        while(pos > 0 && done < k) {
            res[pos][i] = 'D';
            done++;
            pos--;
        }
    }
    for(int i=1; i<=n; i++) {
        for(int j=1; j<=n; j++) {
            if(res[i][j] == 'X')res[i][j] = 'U';
        }
    }
    for(int i=1; i<=n; i++) {
        for(int j=1; j<=n; j++) {
            cout<<res[i][j];
        }
        cout<<endl;
    }
}
signed main() {
    //RASHED
    int TC = 1;
    cin>>TC;
    for(int i=1; i<=TC; i++)solve(i);
    return 0;
}
/**
CASES:
 
*/
 