#include<bits/stdc++.h>
using namespace std;

#define endl "\n"
#define RASHED ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
///#define show(x) cout << #x << " = " << x << endl
#define int long long int
int divi(int n) {
    set<int> s;
    for(int i=1; i<=sqrt(n)+1; i++) {
        if(n%i == 0) {
            s.insert(i);
            s.insert(n/i);
        }
    }
    return (int)s.size();
}
signed main() {
    clock_t start,endd;
    start = clock();
    RASHED
    int nod = 0,val = 0;
    for(int i=1; i<=100005; i++) {
        int curr_nod = divi(i);
        if(curr_nod > nod) {
            val = i;
            nod = curr_nod;
        }
    }
    cout<<"Number with maximum divisors : "<<val<<endl;
    cout<<"Number of divisors : "<<nod<<endl;
    endd = clock();
    double time_taken = double(endd - start) / double(CLOCKS_PER_SEC);
    cout<<"Total time taken by the program : ";
    cout<<fixed<<time_taken<<setprecision(5);
    cout<<" Seconds"<<endl;
    return 0;
}

