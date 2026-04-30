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
 
bool solve(int tc) {
    int n;string s;cin>>n>>s;
    vector<pair<int,int>> p;
    pair<int,int> rf;
    int hrf = 0;
    for(int i=0;i<n;i++){
        if(s[i] == 'p')p.push_back({1,i+1});
        else if(s[i] == 's')p.push_back({i+1,n});
    }
    if(p.empty())return true;
    int N = p.size();
    for(int i=0;i<N;i++){
        int LL = p[i].F,RR = p[i].S;
        for(int j=i+1;j<N;j++){
            int ll = p[j].F,rr = p[j].S;
            if((LL<=ll && RR>=rr) || (ll<=LL && rr>=RR))continue;
            else return false;
        }
    }
    return true;
}
signed main() {
    RASHED
    int TC = 1;
    cin>>TC;
    for(int i=1; i<=TC; i++)cout<<(solve(i)?"YES":"NO")<<endl;
    return 0;
}
/**
CASES:
 
*/