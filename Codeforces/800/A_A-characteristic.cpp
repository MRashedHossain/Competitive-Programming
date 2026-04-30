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
int calcu(int n){
    return ((n*(n-1))/2);
}
void solve(int tc) {
    int n,k;cin>>n>>k;
//    if(n ==2 && k == 0){
//        cout<<"YES\n1 -1"<<endl;
//        return;
//    }
//    if(n>2 && k == 0){
//        cout<<"NO"<<endl;
//        return;
//    }
    for(int i=0;i<=n;i++){
        for(int j=0;j<=n;j++){
           if(calcu(i)+calcu(j) == k && i+j == n){
                cout<<"YES"<<endl;
                for(int ii=0;ii<i;ii++)cout<<"-1 ";
                for(int jj=0;jj<j;jj++)cout<<"1 ";
                cout<<endl;
                return;
           }
        }
    }
    cout<<"NO"<<endl;
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