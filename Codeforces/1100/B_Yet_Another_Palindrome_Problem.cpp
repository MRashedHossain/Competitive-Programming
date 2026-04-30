#include<bits/stdc++.h>
using namespace std;
 
#define endl "\n"
#define RASHED ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
 
bool solve() {
    int n,cnt[5005],a[5005];
    memset(cnt,0,sizeof cnt);
    cin>>n;
    for(int i=1;i<=n;i++)cin>>a[i];
    bool ans = false;
    for(int i=1;i<=n;i++){
        if(cnt[a[i]] && i-cnt[a[i]]>1)return true;
        if (!cnt[a[i]]) cnt[a[i]]= i;
    }
    return false;
}
int main() {
    RASHED
    int tc;
    cin>>tc;
    while(tc--)cout<<(solve()?"YES":"NO")<<endl;
    return 0;
}