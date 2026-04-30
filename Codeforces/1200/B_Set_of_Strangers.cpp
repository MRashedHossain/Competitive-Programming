#include<bits/stdc++.h>
using namespace std;
 
#define RASHED ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
 
#define show(x) cout << #x << " = " << x << endl
#define inf (int)1e17
#define maxn 100010
 
#define F first
#define S second
 
int n,m;
 
int dx[4] = {-1,1,0,0}; ///Side sharing move
int dy[4] = {0,0,-1,1}; ///Side sharing move
 
bool valid(int i, int j)
{
    if (i>=n || i<0 || j>=m || j<0) return false;
    return true;
}
 
int main()
{
    int tc;
    cin >> tc;
    while (tc--){
        cin >> n >> m;
        int A[n+5][m+5];
        map<int,int> F;
        for (int i=0;i<n;i++){
            for (int j=0 ; j<m ; j++){
                cin >> A[i][j];
            }
        }
 
        for (int i=0;i<n;i++){
            for (int j=0 ; j<m ; j++){
                for (int k=0 ; k<4 ; k++){
                    if (valid(i+dx[k],j+dy[k]) && A[i+dx[k]][j+dy[k]] == A[i][j])F[A[i][j]] = 2;
                }
            }
        }
        for (int i=0;i<n;i++){
            for (int j=0 ; j<m ; j++){
                for (int k=0 ; k<4 ; k++){
                    if (F[A[i][j]] != 2) F[A[i][j]] = 1;
                }
            }
        }
 
        int mx = 0,sum = 0;
 
        for (int i=0;i<n;i++){
            for (int j=0 ; j<m ; j++){
                for (int k=0 ; k<4 ; k++){
                    if (F[A[i][j]]){
                        mx = max(mx,F[A[i][j]]);
                        sum += F[A[i][j]];
                        F[A[i][j]] = 0;
                    }
                }
            }
        }
        cout << sum-mx << endl;
 
    }
}
 
/**
CASES:
 
*/