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
    int a,b;
    cin>>a>>b;
    if(a == b){
        cout<<0<<endl;
        return;
    }
    int can = 1;
    while(can <= a)can*=2;
    can--;
    if(can < b)cout<<-1<<endl;
    else {
        vector<int> bit,res,b_bit;
        int tmp = a;
        while(tmp) {
            bit.push_back(tmp%2);
            tmp/=2;
        }
        reverse(bit.begin(),bit.end());
        tmp = b;
        while(tmp) {
            b_bit.push_back(tmp%2);
            tmp/=2;
        }
        while(bit.size() != b_bit.size())b_bit.push_back(0);
        reverse(b_bit.begin(),b_bit.end());
//        for(auto i:bit)cout<<i;
//        cout<<endl;
//        for(auto i:b_bit)cout<<i;
//        cout<<endl;
        for(int i=0,j = (int)bit.size()-1; i<(int)bit.size(); i++,j--) {
            if(bit[i] == 0){
                res.push_back(1<<j);
                bit[i] = 1;
            }
        }
        for(int i=0,j=(int)bit.size()-1;i<(int)bit.size();i++,j--){
            if(bit[i] == 1 && b_bit[i] == 0)res.push_back(1<<j);
        }
        cout<<res.size()<<endl;
        for(auto i:res)cout<<i<<" ";
        cout<<endl;
    }
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
 