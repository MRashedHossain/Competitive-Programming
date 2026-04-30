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
 
struct team {
    int points = 0;
    int gf = 0;
    int ga = 0;
};
 
void solve(int tc) {
    int n;
    cin>>n;
    map<string,team> f;
    string tmp;
    for(int i=0; i<n; i++)cin>>tmp;
    for(int i=0; i<(n*(n-1))/2; i++) {
        string tt,ss;
        cin>>tt>>ss;
        string t1 = "",t2 = "",t1s = "",t2s = "";
        int st = 0;
        while(true) {
            if(tt[st] == '-') {
                st++;
                break;
            }
            t1 += tt[st];
            st++;
        }
        while(st < tt.size()) {
            t2 += tt[st];
            st++;
        }
        st = 0;
        while(true) {
            if(ss[st] == ':') {
                st++;
                break;
            }
            t1s += ss[st];
            st++;
        }
        while(st < ss.size()) {
            t2s += ss[st];
            st++;
        }
        int s1 = stoi(t1s);
        int s2 = stoi(t2s);
        f[t1].gf += s1;
        f[t1].ga += s2;
 
        f[t2].gf += s2;
        f[t2].ga += s1;
 
        if (s1 > s2) f[t1].points += 3;
        else if (s2 > s1) f[t2].points += 3;
        else {
            f[t1].points++;
            f[t2].points++;
        }
 
//        show(t1);
//        show(t2);
//        show(s1);
//        show(s2);
    }
    vector<pair<team,string>> res;
    for(auto i:f) {
        res.push_back({i.S,i.F});
    }
    sort(res.begin(), res.end(), [](const auto &a, const auto &b) {
        const team &A = a.first;
        const team &B = b.first;
        if (A.points != B.points) return A.points > B.points;
 
        int gdA = A.gf - A.ga;
        int gdB = B.gf - B.ga;
        if (gdA != gdB) return gdA > gdB;
 
        return A.gf > B.gf;
    });
 
//    for(auto i:res) {
//        cout<<i.S<<" "<<i.F.point<<" "<<i.F.khaise<<" "<<i.F.dise<<endl;
//    }
    vector<string> ans;
    for(int i=0; i<(n/2); i++)ans.push_back(res[i].S);
    sort(ans.begin(),ans.end());
    for(int i=0; i<ans.size(); i++) {
        cout<<ans[i];
        if(i != ans.size() - 1)cout<<endl;
    }
}
signed main() {
    RASHED
    int TC = 1;
    //cin>>TC;
    for(int i=1; i<=TC; i++)solve(i);
    return 0;
}
/**
CASES:
 
*/
 