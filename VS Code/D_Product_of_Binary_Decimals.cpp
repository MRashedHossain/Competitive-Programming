#include<bits/stdc++.h>
using namespace std;

#define endl "\n"
#define RASHED ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
///#define show(x) cout << #x << " = " << x << endl
#define int long long int
int B[] = {10,11,100,101,110,111,1000,1001,1010,1011,1100,1101,1110,1111,10000,10001,10010,10011,10100,10101,10110,10111,11000,11001,11010,11011,11100,11101,11110,11111,100000};
bool solve() {
    int n;cin>>n;
    for(int i=30;i>=0;i--){
        if(n >= B[i] && n%B[i] == 0){
            while(n%B[i] == 0)n/=B[i];
        }
    }
    return n == 1;
}
signed main() {
    RASHED
    int tc;
    cin>>tc;
    while(tc--)cout<<(solve()?"YES":"NO")<<endl;
    return 0;
}
/**
CASES:

*/
