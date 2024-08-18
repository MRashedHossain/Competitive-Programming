#include<bits/stdc++.h>
using namespace std;

#define endl "\n"
#define RASHED ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
///#define show(x) cout << #x << " = " << x << endl
///#define int long long int

vector<string> S,C,H,D;
int n;
char T;

void clean() {
    S.clear();
    D.clear();
    H.clear();
    C.clear();
}
void ssort() {
    if(!S.empty())sort(S.begin(),S.end());
    if(!D.empty())sort(D.begin(),D.end());
    if(!H.empty())sort(H.begin(),H.end());
    if(!C.empty())sort(C.begin(),C.end());
}
void iinput(string s) {
    if(s[1] == 'S')S.push_back(s);
    if(s[1] == 'C')C.push_back(s);
    if(s[1] == 'D')D.push_back(s);
    if(s[1] == 'H')H.push_back(s);
}
int eextra() {
    int flg = 0;
    flg+=(S.size()%2);
    flg+=(C.size()%2);
    flg+=(D.size()%2);
    flg+=(H.size()%2);
    return flg;
}
int Trump() {
    if(T == 'S')return S.size()%2;
    if(T == 'D')return D.size()%2;
    if(T == 'H')return H.size()%2;
    if(T == 'C')return C.size()%2;
}
bool valid(int ex) {
    if(T == 'S')return (ex <= S.size() && (S.size()-ex)%2 == 0);
    if(T == 'D')return (ex <= D.size() && (D.size()-ex)%2 == 0);
    if(T == 'H')return (ex <= H.size() && (H.size()-ex)%2 == 0);
    if(T == 'C')return (ex <= C.size() && (C.size()-ex)%2 == 0);
}
void Display() {
    if(T == 'S') {
        int N = S.size();
        for(int i=0; i<D.size()-(D.size()%2); i+=2)cout<<D[i]<<" "<<D[i+1]<<endl;
        if(D.size()%2) {
            cout<<D[D.size()-1]<<" "<<S[N-1]<<endl;
            N--;
        }
        for(int i=0; i<H.size()-(H.size()%2); i+=2)cout<<H[i]<<" "<<H[i+1]<<endl;
        if(H.size()%2) {
            cout<<H[H.size()-1]<<" "<<S[N-1]<<endl;
            N--;
        }
        for(int i=0; i<C.size()-(C.size()%2); i+=2)cout<<C[i]<<" "<<C[i+1]<<endl;
        if(C.size()%2) {
            cout<<C[C.size()-1]<<" "<<S[N-1]<<endl;
            N--;
        }
        for(int i=0; i<N; i+=2)cout<<S[i]<<" "<<S[i+1]<<endl;
    }
    if(T == 'D') {
        int N = D.size();
        for(int i=0; i<S.size()-(S.size()%2); i+=2)cout<<S[i]<<" "<<S[i+1]<<endl;
        if(S.size()%2) {
            cout<<S[S.size()-1]<<" "<<D[N-1]<<endl;
            N--;
        }
        for(int i=0; i<H.size()-(H.size()%2); i+=2)cout<<H[i]<<" "<<H[i+1]<<endl;
        if(H.size()%2) {
            cout<<H[H.size()-1]<<" "<<D[N-1]<<endl;
            N--;
        }
        for(int i=0; i<C.size()-(C.size()%2); i+=2)cout<<C[i]<<" "<<C[i+1]<<endl;
        if(C.size()%2) {
            cout<<C[C.size()-1]<<" "<<D[N-1]<<endl;
            N--;
        }
        for(int i=0; i<N; i+=2)cout<<D[i]<<" "<<D[i+1]<<endl;
    }
    if(T == 'H') {
        int N = H.size();
        for(int i=0; i<D.size()-(D.size()%2); i+=2)cout<<D[i]<<" "<<D[i+1]<<endl;
        if(D.size()%2) {
            cout<<D[D.size()-1]<<" "<<H[N-1]<<endl;
            N--;
        }
        for(int i=0; i<S.size()-(S.size()%2); i+=2)cout<<S[i]<<" "<<S[i+1]<<endl;
        if(S.size()%2) {
            cout<<S[S.size()-1]<<" "<<H[N-1]<<endl;
            N--;
        }
        for(int i=0; i<C.size()-(C.size()%2); i+=2)cout<<C[i]<<" "<<C[i+1]<<endl;
        if(C.size()%2) {
            cout<<C[C.size()-1]<<" "<<H[N-1]<<endl;
            N--;
        }
        for(int i=0; i<N; i+=2)cout<<H[i]<<" "<<H[i+1]<<endl;
    }
    if(T == 'C') {
        int N = C.size();
//        cout<<C.size()<<endl;
//        cout<<S.size()<<endl;
//        cout<<H.size()<<endl;
//        cout<<D.size()<<endl;
        for(int i=0; i<D.size()-(D.size()%2); i+=2)cout<<D[i]<<" "<<D[i+1]<<endl;
        if(D.size()%2) {
            cout<<D[D.size()-1]<<" "<<C[N-1]<<endl;
            N--;
        }
        for(int i=0; i<H.size()-(H.size()%2); i+=2)cout<<H[i]<<" "<<H[i+1]<<endl;
        if(H.size()%2) {
            cout<<H[H.size()-1]<<" "<<C[N-1]<<endl;
            N--;
        }
        for(int i=0; i<S.size()-(S.size()%2); i+=2)cout<<S[i]<<" "<<S[i+1]<<endl;
        if(S.size()%2) {
            cout<<S[S.size()-1]<<" "<<C[N-1]<<endl;
            N--;
        }
        for(int i=0; i<N; i+=2)cout<<C[i]<<" "<<C[i+1]<<endl;
    }
}
void solve() {
    cin>>n>>T;
    for(int i = 1; i<=(n*2); i++) {
        string s;
        cin>>s;
        iinput(s);
    }
    ssort();
//    for(auto i:S)cout<<i<<" ";
//    cout<<endl;
    int extra = 0;
    extra += eextra();
    extra -= Trump();
    if(!valid(extra)) {
        cout<<"IMPOSSIBLE"<<endl;
        return ;
    }
//    for(auto i:C)cout<<i<<" ";
//    cout<<endl;
//    for(auto i:S)cout<<i<<" ";
//    cout<<endl;
//    for(auto i:H)cout<<i<<" ";
//    cout<<endl;
    Display();
}
signed main() {
    RASHED
    int tc;
    cin>>tc;
    while(tc--) {
        clean();
        solve();
//        cout<<endl;
//        cout<<endl;
    }
    return 0;
}
/**
1
2
C
9C 9S 6H 8C
*/
