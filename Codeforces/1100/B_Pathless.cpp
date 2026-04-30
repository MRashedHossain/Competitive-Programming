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
    int n,s;
    cin>>n>>s;
    int z = 0,o = 0,t = 0;
    for(int i=0; i<n; i++) {
        int x;
        cin>>x;
        if(x == 0)z++;
        else if(x == 1)o++;
        else t++;
    }
    int sum = o+(2*t);
    if(sum > s) {
        for(int i=0; i<z; i++)cout<<"0 ";
        for(int i=0; i<t; i++)cout<<"2 ";
        for(int i=0; i<o; i++)cout<<"1 ";
    } else if(sum+1 == s){
        for(int i=0; i<z; i++)cout<<"0 ";
        for(int i=0; i<t; i++)cout<<"2 ";
        for(int i=0; i<o; i++)cout<<"1 ";
    }
    else cout<<"-1";
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
 