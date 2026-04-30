#include<bits/stdc++.h>
using namespace std;
 
#define endl "\n"
#define RASHED ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define int long long int
 
void solve() {
    int n;
    cin>>n;
    string s;
    cin>>s;
    int a[n+8]= {0};
    reverse(s.begin(),s.end());
    for(int i=0; i<n; i++) {
        a[i+1] = a[i]+s[i]-'0';
    }
    int pre = 0;
    for(int i=1; i<=n; i++) {
        int hi = n,lo=1,ans = 999999999;
        bool flag = false;
        /**
        1
        5
        10101
        1 1 2 2 3
        */
        while(lo<=hi) {
            int mid = (hi+lo)/2;
            if(mid-a[mid] >= i) {
                ans = min(ans,mid-i);
                hi = mid-1;
            } else lo = mid+1;
        }
        if(ans == 999999999)cout<<-1<<" ";
        else {
            cout<<pre+ans<<" ";
            pre+=ans;
        }
    }
    cout<<endl;
}
int32_t main() {
    RASHED
    int tc;
    cin>>tc;
    while(tc--)solve();
    return 0;
}
 