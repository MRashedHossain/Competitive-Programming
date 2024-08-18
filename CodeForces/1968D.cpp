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
    int n,k,pb,ps;
    cin>>n>>k>>pb>>ps;
    vector<int> point(n+8),per(n+8),A,B;
    vector<bool> visA(n+7,true),visB(n+8,true);
    for(int i=1; i<=n; i++)cin>>per[i];
    for(int i=1; i<=n; i++)cin>>point[i];
    int aa = pb,bb = ps,tmp_move = 1;
    int Amove = k,Bmove = k;
    while(visA[aa] && tmp_move <= Amove) {
        visA[aa] = false;
        A.push_back(point[aa]);
        tmp_move++;
        aa = per[aa];
    }
    tmp_move = 1;
    while(visB[bb] && tmp_move <= Bmove) {
        visB[bb] = false;
        B.push_back(point[bb]);
        tmp_move++;
        bb = per[bb];
    }
    int Bodya = 0,Shasha = 0,currA = 0,currB = 0;
//    for(auto i:A)cout<<i<<" ";
//    cout<<endl;
//    for(auto i:B)cout<<i<<" ";
//    cout<<endl;
//    return;
    for(int i=0; i<A.size(); i++) {
        Bodya = max(Bodya,currA+(k-i)*A[i]);
        currA += A[i];
    }
    for(int i=0; i<B.size(); i++) {
        Shasha = max(Shasha,currB+(k-i)*B[i]);
        currB += B[i];
    }
//    show(Bodya);
//    show(Shasha);
    if(Bodya > Shasha)cout<<"Bodya"<<endl;
    else if(Shasha > Bodya)cout<<"Sasha"<<endl;
    else cout<<"Draw"<<endl;
    return;
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
4 2 3 2
4 1 2 3
7 2 5 6

1
5 1 2 5
1 2 4 5 3
4 6 9 4 2

2
10 8 2 10
3 1 4 5 2 7 8 10 6 9
5 10 5 1 3 7 10 15 4 3
6 9 5 4
6 1 3 5 2 4
6 9 8 9 5 10
*/

