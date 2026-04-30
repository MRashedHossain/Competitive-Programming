#include<bits/stdc++.h>
using namespace std;
 
#define endl "\n"
#define RASHED ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
 
void solve() {
 
}
int main() {
    RASHED
    int n,a[10],total = 0,ans= 0;
    cin>>n;
    for(int i=1; i<=7; i++) {
        cin>>a[i];
        total += a[i];
    }
    ///n -= (n/total);
    while(true) {
        bool flag = false;
        for(int i = 1; i<=7; i++) {
            n-=a[i];
            if(n<=0) {
                ans = i;
                flag = true;
                break;
            }
        }
        if(flag)break;
    }
    cout<<ans<<endl;
    return 0;
}