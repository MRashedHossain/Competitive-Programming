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
    int a,b,c,d;
    int f1 = 0,f2 = 0;
    cin>>a>>b>>c>>d;
    vector<int>v,vv;
    if(abs(a-b)-1 > 5) {
        int aa = min(a,b),bb = max(a,b);
        aa+=12;
        for(int i=bb; i<=aa; i++) {
            if(i>12)v.push_back(i-12);
            else v.push_back(i);
        }
        for(auto i:v)if(i == c || i == d)f1++;
        if(f1 == 1)return true;
        return false;
    } else if(abs(a-b)-1 < 5) {
        int aa = min(a,b),bb = max(a,b);
        for(int i=aa; i<=bb; i++) {
            if(i>12)v.push_back(i-12);
            else v.push_back(i);
        }
        for(auto i:v)if(i == c || i == d)f1++;
        if(f1 == 1)return true;
        return false;
    } else {
        int aa = min(a,b),bb = max(a,b);
        for(int i=aa; i<=bb; i++) {
            if(i>12)v.push_back(i-12);
            else v.push_back(i);
        }
        aa+=12;
        for(int i=bb; i<=aa; i++) {
            if(i>12)vv.push_back(i-12);
            else vv.push_back(i);
        }
        for(auto i:v)if(i == c || i == d)f1++;
        for(auto i:vv)if(i == c || i == d)f2++;
        if(f1 == 1 || f2 == 1)return true;
        return false;
    }
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
