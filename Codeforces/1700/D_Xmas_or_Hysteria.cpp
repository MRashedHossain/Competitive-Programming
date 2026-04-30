#include<bits/stdc++.h>
using namespace std;
 
#define RASHED ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define int long long int
 
#define show(x) cout << #x << " = " << x << endl
#define inf (int)1e17
#define maxn 100010
 
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define sz(x) ((int)(x).size())
 
#define F first
#define S second
 
struct elf {
    int health,power,pos;
};
 
void solve(int tc) {
    int n,m;
    cin>>n>>m;
    vector<int> v(n);
    vector<elf> e(n);
    int tot = 0,mx = 0;
    for(int i=0; i<n; i++) {
        cin>>v[i];
        e[i] = {v[i],v[i],i+1};
        tot += v[i];
        mx = max(mx,v[i]);
    }
    if(m > (n/2) || (m == 0 && mx > tot - mx)) {
        cout<<-1<<endl;
        return;
    }
    sort(all(e),[](elf &a,elf &b) {
        return (a.health < b.health);
    });
    vector<pair<int,int>> res;
    if(m == 0) {
        int got = 0,p = 0;
        for(int i=0; i<n-1; i++) {
            if(got >= e[n-1].health || e[n-2].power >= e[n-1].health - got)break;
            got += e[i].health;
            res.push_back({e[i].pos,e[n-1].pos});
            p = i+1;
        }
        for(int i=p; i<n-2; i++)res.push_back({e[i].pos,e[i+1].pos});
        if(got < e[n-1].health)res.push_back({e[n-2].pos,e[n-1].pos});
    } else {
        queue<elf> ded,liv;
        for(int i=0; i<n-m; i++) ded.push(e[i]);
        for(int i=n-m; i<n; i++) liv.push(e[i]);
        while(ded.size() > m){
            elf attacker = ded.front();
            ded.pop();
            res.push_back({attacker.pos,ded.front().pos});
        }
        while(!liv.empty()){
            res.push_back({liv.front().pos,ded.front().pos});
            liv.pop();
            ded.pop();
        }
    }
    cout<<res.size()<<endl;
    for(auto [x,y]:res)cout<<x<<" "<<y<<endl;
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