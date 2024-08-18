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

void solve(int tc) {
    int n;
    string s;
    cin>>n>>s;
    string res = s;
    int NN = 0,SS = 0,EE = 0,WW = 0;
    for(int i=0; i<n; i++) {
        if(s[i] == 'N')NN++;
        if(s[i] == 'S')SS++;
        if(s[i] == 'E')EE++;
        if(s[i] == 'W')WW++;
    }
    int RN = 0,RS = 0,RE = 0,RW = 0;
    if(NN > SS) {
        RS = SS;
        RN = SS+((NN-SS)/2);
    } else if(SS > NN) {
        RN = NN;
        RS = NN+((SS-NN)/2);
    } else {
        if(NN > 1) {
            RN = 1;
            RS = 1;
        } else {
            RN = NN;
            RS = SS;
        }
    }
    if(EE > WW) {
        RW = WW;
        RE = WW+((EE-WW)/2);
    } else if(WW > EE) {
        RE = EE;
        RW = EE+((WW-EE)/2);
    } else {
        if(WW > 1) {
            RW = 1;
            RE = 1;
        } else {
            if(RN == 0 && RS == 0) {
                RW = WW;
                RE = EE;
            }
        }
    }
//    show(RN);
//    show(RS);
//    show(RE);
//    show(RW);
    if(abs(NN-SS)%2 || abs(EE-WW)%2 || RN+RS+RE+RW == n || RN+RS+RE+RW == 0) {
        cout<<"NO"<<endl;
        return;
    }
    for(int i=0; i<n; i++) {
        if(res[i] == 'N' && RN > 0) {
            res[i] = 'R';
            RN--;
        }
        if(res[i] == 'S' && RS > 0) {
            res[i] = 'R';
            RS--;
        }
        if(res[i] == 'E' && RE > 0) {
            res[i] = 'R';
            RE--;
        }
        if(res[i] == 'W' && RW > 0) {
            res[i] = 'R';
            RW--;
        }
    }
    for(int i=0; i<n; i++)if(res[i] != 'R')res[i] = 'H';
    cout<<res<<endl;
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
1
6
NESSWS
*/

