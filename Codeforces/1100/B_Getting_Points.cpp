#include<bits/stdc++.h>
using namespace std;
 
#define endl "\n"
#define RASHED ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define int long long int
 
int solve() {
    int n,p,l,t;
    cin>>n>>p>>l>>t;
    int ttt = (t*2)+l, tt = t+l,flg = ((n+6)/7)/2,ans = 0;
    if(ttt*flg >= p){
        return n-((p+ttt-1)/ttt);
    }
    else {
        p -= (ttt*flg);
        ans+=flg;
    }
    if (tt >= p && ((n+6)/7)%2){
        return n-(ans+1);
    }
    else if (tt < p && ((n+6)/7)%2){
        p-=tt;
        ans++;
    }
    ans+=((p+l-1)/l);
    return n-ans;
 
}
signed main() {
    RASHED
    int tc;
    cin>>tc;
    while(tc--)cout<<solve()<<endl;
    return 0;
}
/**
2
8 120 10 20
42 280 13 37
 
*/