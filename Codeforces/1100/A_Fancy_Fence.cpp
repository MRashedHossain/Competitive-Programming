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
    int tc;
    cin>>tc;
    while(tc--) {
        int n;cin>>n;
        cout<<(360%(180-n)?"NO":"YES")<<endl;
    }
    return 0;
}
 