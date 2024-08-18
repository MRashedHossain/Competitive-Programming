#include<bits/stdc++.h>
using namespace std;

#define endl "\n"
#define RASHED ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

///#define int long long int
///#define show(x) cout << #x << " = " << x << endl
///#define maxn 200100

void solve(int tc) {
    int n;
    cin>>n;
    if(n == 1)cout<<"2"<<endl;
    else if(n == 2)cout<<"2 7"<<endl;
    else if(n == 3)cout<<"1 2 3"<<endl;
    else if(n == 4)cout<<"1 2 3 5"<<endl;
    else {
        int a = 2,b = 524287;
        if(n%4 == 1) {
            for(int i=0; i<(n/4); i++) {
                cout<<a<<" "<<b<<" ";
                a++;
                b--;
                cout<<a<<" "<<b<<" ";
                a++;
                b--;
            }
            cout<<"474263"<<endl;
        } else if(n%4 == 2) {
            for(int i=0; i<(n/4); i++) {
                cout<<a<<" "<<b<<" ";
                a++;
                b--;
                cout<<a<<" "<<b<<" ";
                a++;
                b--;
            }
            cout<<"474286 50001"<<endl;
        } else if(n%4 == 3) {
            for(int i=0; i<(n/4); i++) {
                cout<<a<<" "<<b<<" ";
                a++;
                b--;
                cout<<a<<" "<<b<<" ";
                a++;
                b--;
            }
            cout<<"474286 474267 50034"<<endl;
        } else {
            for(int i=0; i<(n/4)-1; i++) {
                cout<<a<<" "<<b<<" ";
                a++;
                b--;
                cout<<a<<" "<<b<<" ";
                a++;
                b--;
            }
            cout<<"131073 131074 131075 262175"<<endl;
        }
    }
}
signed main() {
    RASHED
    int TC;
    cin>>TC;
    for(int i=1; i<=TC; i++)solve(i);
    return 0;
}
/**
CASES:

*/

