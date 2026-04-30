#include<bits/stdc++.h>
using namespace std;
 
#define RASHED ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define int long long int
 
#define show(x) cout << #x << " = " << x << endl
#define inf (int)1e9
#define maxn 100010
 
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define sz(x) ((int)(x).size())
 
#define F first
#define S second
 
void solve(int tc) {
    int n,m,k;cin>>n>>m>>k;
    vector<int> robot(n),spike(m);
    unordered_map<int,vector<int>> dies;
    for(int i=0;i<n;i++)cin>>robot[i];
    for(int i=0;i<m;i++)cin>>spike[i];
    sort(all(spike));
    sort(all(robot));
    string s;cin>>s;
    int curr = 0;
    for(int i=0;i<k;i++){
        (s[i] == 'L'?curr--:curr++);
        dies[curr].push_back(i+1);
    }
    vector<int> res(k+2,0);
    for(int i=0;i<n;i++){
        int ll = -inf,rr = inf;
        int lo = 0,hi = m-1;
        while(lo <= hi){
            int mid = (lo+hi)/2;
            if(spike[mid] < robot[i]){
                ll = max(ll,spike[mid]);
                lo = mid+1;
            }else hi = mid-1;
        }
        lo = 0,hi = m-1;
        while(lo<=hi){
            int mid = (lo+hi)/2;
            if(spike[mid] > robot[i]){
                rr = min(rr,spike[mid]);
                hi = mid-1;
            }else lo = mid+1;
        }
        int need_ll = ll - robot[i],need_rr = rr - robot[i];
        int ans_ll=inf,ans_rr=inf;
        if(!dies[need_ll].empty())ans_ll = dies[need_ll].front();
        if(!dies[need_rr].empty())ans_rr = dies[need_rr].front();
        int ans = min(ans_ll,ans_rr);
        if(ans == inf)res[k]++;
        else res[ans-1]++;
    }
    for(int i=k;i>=1;i--)res[i] += res[i+1];
    for(int i=1;i<=k;i++)cout<<res[i]<<" ";
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
 
 