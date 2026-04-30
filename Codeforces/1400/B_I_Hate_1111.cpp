#include<bits/stdc++.h>
using namespace std;
 
#define endl "\n"
#define RASHED ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
///#define int long long int
 
bool solve() {
    int n;
    cin>>n;
    int m = 0;
    while(true) {
        int point = m*111;
        if(point > n)break;
        if((n-point)%11 == 0)return true;
        m++;
    }
    return false;
}
int32_t main() {
    RASHED
    int tc;
    cin>>tc;
    while(tc--)cout<<(solve()?"YES":"NO")<<endl;
    return 0;
}