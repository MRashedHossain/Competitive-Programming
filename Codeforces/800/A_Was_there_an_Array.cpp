#include<bits/stdc++.h>
using namespace std;
 
#define RASHED ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
 
#define show(x) cout << #x << " = " << x << endl
#define inf (int)1e17
#define maxn 100010
 
#define F first
#define S second
 
int main()
{
    int tc;
    cin >> tc;
    while (tc--){
        int n;
        cin >> n;
        int A[n+5];
        for (int i=1 ; i<n-1; i++){
            cin >> A[i];
        }
        bool ans = true;
        for (int i=1+1 ; i<n-2 ; i++){
            if (A[i-1] == 1 && A[i+1]==1 && A[i]==0)ans=false;
        }
        cout << (ans?"YES":"NO") << endl;
    }
}
 
/**
CASES:
 
*/