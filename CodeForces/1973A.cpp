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

int solve(int tc) {
    int a,b,c;cin>>a>>b>>c;
    int pr = a%2+b%2+c%2;
    if(pr == 1 || pr == 3)return -1;
    if(a+b >= c)return (a+b+c)/2;
    return a+b;
}
signed main() {
    RASHED
    int TC = 1;
    cin>>TC;
    for(int i=1; i<=TC; i++)cout<<solve(i)<<endl;
    return 0;
}
/**
CASES:

*/

