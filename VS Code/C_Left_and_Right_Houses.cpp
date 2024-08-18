#include<bits/stdc++.h>
using namespace std;

#define endl "\n"
#define RASHED ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define show(x) cout << #x << " = " << x << endl
#define int long long int

int solve() {
    double n;
    string s;
    cin>>n>>s;
    int zero[(int)n+8] = {0},one[(int)n+8] = {0},z = 0,o = 0;
    for(int i=0; i<n; i++) {
        if(s[i] == '1')o++;
        else z++;
        one[i+1] = o;
        zero[i+1] = z;
    }

//    for(int i=1; i<=n; i++)cout<<one[i]<<" ";
//    cout<<endl;
//    for(int i=1; i<=n; i++)cout<<zero[i]<<" ";
//    cout<<endl;

    double res = -1,pre = INT_MAX;
    for(int i=0; i<=n; i++) {
        int zz = zero[i],oo = one[(int)n]-one[i];
        if(2*zz >= i && 2*oo >= n-i) {
            if(pre > abs((n/2)-i) || res == -1) {
                res = i;
                pre = abs((n/2)-i);
            } else if(pre == abs((n/2)-i) && res > i)res = i;
        }
    }
    return res;
}
signed main() {
    RASHED
    int tc;
    cin>>tc;
    while(tc--)cout<<solve()<<endl;
    return 0;
}
/**
CASES:
1
6
010111

1
6
011001

2
6
010111
6
011001

1
3
101

3
3
101
6
010111
6
011001
*/
