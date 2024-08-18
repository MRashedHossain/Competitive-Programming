#include<bits/stdc++.h>
using namespace std;

#define RASHED ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define int long long int

#define show(x) cout << #x << " = " << x << endl
#define inf (int)1e18
#define maxn 100010

#define F first
#define S second
bool prime(int n){
    for(int i=2;i*i <= n;i++)if(n%i == 0)return false;
    return true;
}
signed main() {
    RASHED
//    int val = 2;
//    while(val <= (int)1e9){
//        cout<<val-1<<" ";
//        val *= 2;
//    }
//    cout<<endl;
//    return 0;
    int x = 1,b = 67108863;
    for(int i=2;i<=(int)1e5;i++)x = (x^i);
    cout<<(x^b)<<endl;


    return 0;
}
/**
Prime with all bits ON ---> 131071 524287
536870911,67108863,33554431
*/
