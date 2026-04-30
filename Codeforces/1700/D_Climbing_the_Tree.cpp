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
    int q;cin>>q;
    int L = 1,R = 1e18;
    while(q--){
        int o;cin>>o;
        if(o == 1){
            int a,b,n;cin>>a>>b>>n;
            int nowL = ((n-2)*(a-b))+a+1,nowR = ((n-1)*(a-b))+a;
            if(n == 1){
                nowL = 1;
                nowR = a;
            }
            if(nowL>R || nowR < L)cout<<"0"<<" ";
            else {
                cout<<"1"<<" ";
                L = max(L,nowL);
                R = min(R,nowR);
            }
        }else {
            int a,b;cin>>a>>b;
            int bam = max(1LL,((L-b-1)/(a-b))+1),dan = max(1LL,((R-b-1)/(a-b))+1);
            if(bam == dan)cout<<bam<<" ";
            else cout<<"-1"<<" ";
        }
    }
    cout<<endl;
}
signed main() {
    RASHED
    int TC = 1;
    cin>>TC;
    for(int i=1; i<=TC; i++)solve(i);
    return 0;
}
/**
CASES:

*/
