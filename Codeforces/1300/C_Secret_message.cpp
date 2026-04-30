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
 
void solve(int tc) {
    int n,k;
    cin>>n>>k;
    vector<string> s(k);
    for(int i=0; i<k; i++)cin>>s[i];
 
    int can[n][27];
    memset(can,0,sizeof(can));
    for(int i=0; i<k; i++) {
        for(int j=0; j<n; j++) {
            can[j][s[i][j] - 'a']++;
        }
    }
 
    vector<int> div;
    for(int i=1; i*i<=n; i++) {
        if(n%i)continue;
        int l = i,r = (n/i);
        div.push_back(l);
        if(l != r)div.push_back(r);
    }
    sort(all(div));
 
    string ans;
    bool got = false;
 
    for(auto ii:div) {
        bool curr = true;
        string now = "";
        for(int i=0; i<ii; i++)now += 'a';
        for(int i=0; i<ii && curr ; i++) {
            vector<bool> msk(27,true);
            for(int j=i; j<n; j+=ii) {
                for(int k=0; k<26; k++) {
                    msk[k] = (msk[k] && can[j][k]?1:0);
                }
            }
            int here = -1;
            for(int k=0; k<26; k++) {
                if(msk[k]) {
                    here = k;
                    break;
                }
            }
            //show(here);
            if(here == -1) {
                curr = false;
                break;
            } else {
                now[i] = (char)('a'+here);
            }
        }
        if(curr) {
            for(int i=0; i<n; i++)ans.push_back(now[i%ii]);
            got = true;
            break;
        }
    }
    if(!got) {
        for(int i=0; i<n; i++)cout<<'a';
        cout<<endl;
    } else cout<<ans<<endl;
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
 