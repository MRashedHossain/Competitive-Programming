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
    int n,a[111] = {0},b[111],ans = 0,_one = 101,cnt1 = 0;
    pair<int,int> p = {0,0};
    cin>>n;
    for(int i=1; i<=n; i++) {
        cin>>b[i];
        a[i] = a[i-1]+b[i];
        if(b[i])cnt1++;
    }
    if(n == 1){
        cout<<1-b[1]<<endl;
        return 0;
    }
    if(cnt1 == n){
        cout<<n-1<<endl;
        return 0;
    }
    ///for(int i=1;i<=n;i++)cout<<a[i]<<" ";
    ///cout<<endl;
    for(int i=1; i<=n; i++) {
        for(int j=i+1; j<=n; j++) {
            int zero = j-i+1-(a[j]-a[i]+b[i]);
            int one = (j-i+1)-zero;
            if(zero-one > ans) {
                _one = one;
                ans = zero-one;
                p = {i,j};
            }
            else if(zero-one == ans){
                if(_one>one){
                    p = {i,j};
                    _one = one;
                }
            }
        }
    }
    ///cout<<p.first<<" "<<p.second<<endl;
    for(int i=p.first; i<=p.second; i++)b[i] = 1-b[i];
    int flg = 0;
    for(int i=1; i<=n; i++)if(b[i])flg++;
    cout<<flg<<endl;
    return 0;
}