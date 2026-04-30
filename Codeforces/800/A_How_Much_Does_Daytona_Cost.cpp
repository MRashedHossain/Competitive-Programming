#include<bits/stdc++.h>
using namespace std;
 
#define endl "\n"
#define FAST ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define show(x) cout << #x << " : " << x << endl
#define ll long long int
#define maxn 100100
 
void clean() {
 
}
bool solve() {
    int n,k;cin>>n>>k;
    bool flag = false;
    for (int i =0;i<n;i++){
        int x;cin>>x;
        if (x==k)flag = true;
    }
    return flag;
}
int main() {
    FAST
    int tc;
    cin>>tc;
    while(tc--){
        cout<<(solve()?"YES":"NO")<<endl;
    }
    return 0;
}