#include<bits/stdc++.h>
using namespace std;
 
#define endl "\n"
#define RASHED ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
///#define int long long int
 
bool solve() {
    int n;cin>>n;
    int _25 = 0,_50 = 0;
    while(n--){
        int x;cin>>x;
        if(x == 25)_25++;
        else if(x == 50){
            if(!_25)return false;
            else {
                _25--;_50++;
            }
        }
        else {
            if(_25 && _50){_25--;_50--;}
            else if(!_50 && _25>2)_25-=3;
            else return false;
        }
    }
    return true;
}
int32_t main() {
    RASHED
    cout<<(solve()?"YES":"NO")<<endl;
    return 0;
}
 