#include<bits/stdc++.h>
using namespace std;
 
#define endl "\n"
#define RASHED ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
///#define show(x) cout << #x << " = " << x << endl
#define int long long int
 
bool solve() {
    int n;
    cin>>n;
    int a[n+8]= {0},b[n+8]= {0};
    for(int i=1; i<=n; i++)cin>>a[i];
    if(n == 1)return false;
    int even = 0,odd = 0;
    for(int i=1; i<=n; i++) {
        if(i%2) {
            odd+=a[i];
            b[i] = odd-even;
        } else {
            even+=a[i];
            b[i] = odd-even;
        }
    }
    ///for(int i=1;i<=n;i++)cout<<b[i]<<" ";
    ///cout<<endl;
    map<int,int> m;
    for(int i=0; i<=n; i++) {
        if(m[b[i]])return true;
        else m[b[i]]++;
    }
    return false;
}
signed main() {
    RASHED
    int tc;
    cin>>tc;
    while(tc--)cout<<(solve()?"YES":"NO")<<endl;
    return 0;
}
/**
1
3
1 3 2
 
1
8
1 2 11 4 1 5 1 2
 
1
9
2 5 10 4 4 9 6 7 8
*/